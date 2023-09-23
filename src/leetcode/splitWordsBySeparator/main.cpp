#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/*
  Given an array of strings words and a character separator, split each string in words by separator.
  Return an array of strings containing the new strings formed after the splits, excluding empty strings.

  Example:
  Input: ["one.two.three","four.five","six"], "."
  Output: ["one","two","three","four","five","six"]
*/

vector<string> split(string s, char limit)
{
  vector<string> output;
  stringstream ss(s);
  string fragment;

  while (!ss.eof()) {
    getline(ss, fragment, limit);
    output.push_back(fragment);
  }

  return output;
}

vector<string> splitWordsBySeparator(vector<string> &words, char separator)
{
  vector<string> output;
  vector<string> splitted;
  string fragment;

  for (unsigned int i = 0; i < words.size(); i++) {
    splitted = split(words[i], separator);

    for (unsigned int j = 0; j < splitted.size(); j++) {
      fragment = splitted[j];

      if (!fragment.empty()) { output.push_back(fragment); }
    }
  }

  return output;
}

int main()
{
  char separator = '.';
  vector<string> words;
  words.push_back("one.two.three");
  words.push_back("four.five");
  words.push_back("six");

  vector<string> result = splitWordsBySeparator(words, separator);

  for (unsigned int i = 0; i < result.size(); i++) { cout << result[i] << endl; }

  cin.get();
}
