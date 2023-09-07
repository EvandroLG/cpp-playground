#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int> &arr)
{
  int acc = 0;

  for (unsigned int i = 0; i < arr.size(); i++) {
    acc += arr[i];
    arr[i] = acc;
  }

  return arr;
}

int main()
{
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);

  runningSum(arr);
}
