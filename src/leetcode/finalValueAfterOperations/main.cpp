#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
  There is a programming language with only four operations and one variable X:
  - ++X and X++ increments the value of the variable X by 1.
  - --X and X-- decrements the value of the variable X by 1.
  Given an array of strings operations containing a list of operations, return
  the final value of X after performing all the operations.

  Example:
  Input: ["--X","X++","X++"]
  Output: 1
*/

int finalValueAfterOperations(vector<string> &operations) {
  int counter = 0;

  for (unsigned int i = 0; i < operations.size(); i++) {
    if (operations[i].find("--") != string::npos) {
      counter--;
    } else {
      counter++;
    }
  }

  return counter;
}

int main() {
  vector<string> operations;
  operations.push_back("--X");
  operations.push_back("X++");
  operations.push_back("X++");

  int result = finalValueAfterOperations(operations);
  cout << result << endl;

  std::cin.get();
}
