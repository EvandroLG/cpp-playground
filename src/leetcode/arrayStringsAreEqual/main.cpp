#include <iostream>
#include <vector>

using namespace std;

/*
  Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.
  A string is represented by an array if the array elements concatenated in order forms the string.

  Example:
  Input: ["ab", "c"], ["a", "bc"]
  Output: true
*/

string join(vector<string> arr)
{
  string str = "";

  for (unsigned int i = 0; i < arr.size(); i++) { str += arr[i]; }

  return str;
}

bool arrayStringAreEqual(vector<string> &word1, vector<string> &word2) { return join(word1) == join(word2); }

int main()
{
  vector<string> word1;
  word1.push_back("ab");
  word1.push_back("c");

  vector<string> word2;
  word2.push_back("a");
  word2.push_back("bc");

  bool result = arrayStringAreEqual(word1, word2);
  cout << result << endl;
  cin.get();
};
