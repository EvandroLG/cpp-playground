#include <iostream>
#include <vector>

using namespace std;

/*
  There are n employees in a company, numbered from 0 to n - 1. Each employee i
  has worked for hours[i] hours in the company.
  The company requires each employee to work for at least target hours.
  You are given a 0-indexed array of non-negative integers hours of length n
  and a non-negative integer target.
  Example:

  Input: [0,1,2,3,4], 2
  Output: 3
*/
int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target) {
  int counter = 0;

  for (unsigned int i = 0; i < hours.size(); i++) {
    if (hours[i] >= target) {
      counter++;
    }
  }

  return counter;
}

int main() {
  vector<int> hours;
  hours.push_back(0);
  hours.push_back(1);
  hours.push_back(2);
  hours.push_back(3);
  hours.push_back(4);

  int result = numberOfEmployeesWhoMetTarget(hours, 2);

  cout << result << endl;
  cin.get();
}
