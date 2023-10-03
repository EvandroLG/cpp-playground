#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

/*
 * Given an array of non-negative integers arr, you are initially positioned at start index of the array. When you are
 * at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach any index with value 0. Notice that you
 * can not jump outside of the array at any time.
 *
 * Example:
 * Input: [4,2,3,0,3,1,2], 5
 * Output: true
 */

bool helper(vector<int> &arr, int index, unordered_map<int, bool> &memo)
{
  if (memo[index]) { return false; }

  if (arr[index] == 0) { return true; }

  return helper(arr, index + arr[index], memo) || helper(arr, index - arr[index], memo);
}

bool canReach(vector<int> &arr, int start)
{
  unordered_map<int, bool> memo;
  return helper(arr, start, memo);
}

int main()
{
  vector<int> arr;
  arr.push_back(4);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(0);
  arr.push_back(3);
  arr.push_back(1);
  arr.push_back(2);

  bool result = canReach(arr, 5);
  cout << result << endl;
  cin.get();
}
