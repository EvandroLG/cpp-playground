#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x)
{
  string s = to_string(x);
  int p1 = 0;
  int p2 = s.length() - 1;

  while (p1 < p2) {
    if (s[p1] != s[p2]) { return false; }

    p1++;
    p2--;
  }


  return true;
}

int main()
{
  bool result = isPalindrome(121);
  cout << result << endl;

  cin.get();
}
