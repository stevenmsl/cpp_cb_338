#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol338;

/*
Input: 2
Output: [0,1,1]
*/
tuple<int, vector<int>>
testFixture1()
{
  return make_tuple(2, vector<int>{0, 1, 1});
}

/*
Input: 5
Output: [0,1,1,2,1,2]
*/
tuple<int, vector<int>>
testFixture2()
{
  return make_tuple(5, vector<int>{0, 1, 1, 2, 1, 2});
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.countBits(get<0>(f))) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see: " << Util::toString(get<1>(f)) << endl;
  Solution sol;
  cout << Util::toString(sol.countBits(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();

  return 0;
}