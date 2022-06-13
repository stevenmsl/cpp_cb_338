#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol338;
using namespace std;

/*takeaways
- it's about finding a pattern so you can achieve
  time complexity O(n)
- result[i] = result[i/2] if i is a even number
- result[i] = result[i/2] + 1 if i is an odd number

i    binary '1'
0    0000    0
-----------------------
1    0001    1    [1/2] + 1 = [0] + 1 (1 is an odd number)
-----------------------
2    0010    1    [2/2] = [1] (2 is a even number)
3    0011    2    [3/2] + 1 = [1] + 1 (3 is an odd number)
-----------------------
4    0100    1    0000
5    0101    2    0100
6    0110    2    0100
7    0111    3    0110
-----------------------
8    1000    1    0000
9    1001    2    1000
10   1010    2    1000
11   1011    3    1010
12   1100    2    1000
13   1101    3    1100
14   1110    3    1100
15   1111    4    1110

*/
vector<int> Solution::countBits(int num)
{
  auto result = vector<int>{0};
  for (auto i = 1; i <= num; i++)
    if (i % 2 == 0)
      result.push_back(result[i / 2]);
    else
      result.push_back(result[i / 2] + 1);

  return result;
}