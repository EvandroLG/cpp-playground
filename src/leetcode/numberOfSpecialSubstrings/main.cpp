#include <iostream>
#include <string>

using namespace std;

/*
 You are given a string s consisting only of lowercase English letters. We call a substring special if it contains no
 character which has occurred at least twice (in other words, it does not contain a repeating character). Your task is
 to count the number of special substrings. For example, in the string "pop", the substring "po" is a special substring,
 however, "pop" is not special (since 'p' has occurred twice).
 Return the number of special substrings.
  A substring is a contiguous sequence of characters within a string. For example, "abc" is a substring of "abcd", but
 "acd" is not.

  Input: "abcd"
  Output: 10
*/

int numberOfSpecialSubstrings(string s)
{
  unordered_map<char, int> map;
  int counter = 0;
  int p1 = 0;
  int p2 = 0;

  while (p2 < s.size()) {
    if (map.find(s[p2]) != map.end() && map[s[p2]] >= p1) { p1 = map[s[p2]] + 1; }

    map[s[p2]] = p2;
    counter += p2 - p1 + 1;

    p2++;
  }

  return counter;
}

int main()
{
  int result = numberOfSpecialSubstrings("abcd");
  std::cout << "Result: " << result << std::endl;
  return 0;
}
