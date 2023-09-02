#include <iostream>
#include <unordered_map>

using namespace std;

int firstUniqueCharacter(string s) {
  unordered_map<char, int> map;

  for (unsigned int i = 0; i < s.size(); i++) {
    if (map.find(s[i]) != map.end()) {
      map[s[i]] = -1;
    } else {
      map[s[i]] = i;
    }
  }

  int result = -1;

  for (auto &[k, v] : map) {
    if (v == 0) {
      return 0;
    }

    if (result == -1 && v > 0) {
      result = v;
      continue;
    }

    if (v > 0 && result > v) {
      result = v;
    }
  }

  return result;
}

int main() {
  int result = firstUniqueCharacter("loveleetcode");

  cout << result << endl;
  cin.get();
}
