#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

/*
  Given a string s containing just the characters '(', ')', '{', '}', '[' and
  ']', determine if the input string is valid.

  An input string is valid if:
  1. Open brackets must be closed by the same type of brackets.
  2. Open brackets must be closed in the correct order.
  3. Every close bracket has a corresponding open bracket of the same type.

  Example:
  Input: "()[]{}"
  Output: true
*/
bool isValid(string s) {
  stack<char> stack;

  unordered_map<char, char> map;
  map['('] = ')';
  map['['] = ']';
  map['{'] = '}';

  unordered_map<char, bool> open;
  open['('] = true;
  open['['] = true;
  open['{'] = true;

  for (unsigned int i = 0; i < s.size(); i++) {
    if (open[s[i]]) {
      stack.push(s[i]);
      continue;
    }

    if (stack.empty()) {
      return false;
    }

    if (map[stack.top()] != s[i]) {
      return false;
    }

    stack.pop();
  }

  return stack.empty();
}

int main() {
  bool result = isValid("()[]{}");
  cout << result << endl;
  std::cin.get();
}
