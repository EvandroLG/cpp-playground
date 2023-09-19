#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int balancedStringSplit(string s)
{
  unordered_map<char, int> map;
  map['R'] = 0;
  map['L'] = 0;

  int result = 0;

  for (unsigned int i = 0; i < s.size(); i++) {
    map[s[i]]++;

    if (map['R'] == map['L']) {
      result++;
      map['R'] = 0;
      map['L'] = 0;
    }
  }

  return result;
}

int main()
{
  int result = balancedStringSplit("RLRRLLRLRL");
  cout << result << endl;

  cin.get();
}
