#include <iostream>
#include <unordered_map>

using namespace std;

/*
  You're given strings jewels representing the types of stones that are jewels,
  and stones representing the stones you have. Each character in stones is a
  type of stone you have. You want to know how many of the stones you have are
  also jewels.

  Letters are case sensitive, so "a" is considered a different type of stone
  from "A".

  Example:
  Input: "aA", "aAAbbbb"
  Output: 3
*/
int totalOfJewelsInStones(string jewels, string stones) {
  int counter = 0;
  unordered_map<char, bool> set;

  for (unsigned int i = 0; i < jewels.size(); i++) {
    set[jewels[i]] = true;
  }

  for (unsigned int i = 0; i < stones.size(); i++) {
    if (set[stones[i]]) {
      counter++;
    }
  }

  return counter;
}

int main() {
  int result = totalOfJewelsInStones("aA", "aAAbbbb");

  cout << result << endl;
  cin.get();
}
