#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
  Given an integer array nums of length n, you want to create an array ans of
  length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n
  (0-indexed).

  Specifically, ans is the concatenation of two nums arrays.

  Example:
  Input: [1,2,1]
  Output: [1,2,1,1,2,1]
*/

vector<int> getConcatenation(vector<int> &nums) {
  vector<int> output;

  for (unsigned int i = 0; i < nums.size(); i++) {
    output.push_back(nums[i]);
  }

  for (unsigned int i = 0; i < nums.size(); i++) {
    output.push_back(nums[i]);
  }

  return output;
}

int main() {
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(1);

  getConcatenation(nums);

  std::cin.get();
}
