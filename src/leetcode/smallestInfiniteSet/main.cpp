#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class SmallestInfiniteSet
{
public:
  unordered_map<int, bool> removed_items;

  int popSmallest()
  {
    if (removed_items.find(1) == removed_items.end()) {
      removed_items[1] = true;
      return 1;
    }

    vector<int> arr;

    for (auto &[k, v] : removed_items) { arr.push_back(k); }

    sort(arr.begin(), arr.end());
    int idx = 0;

    for (unsigned int i = 0; i < arr.size(); i++) {
      if (arr[i] != idx + 1) {
        removed_items[idx + 1] = true;
        return idx + 1;
      }

      idx++;
    }

    removed_items[idx + 1] = true;
    return idx + 1;
  }

  void addBack(int num) { removed_items.erase(num); }
};

int main()
{
  SmallestInfiniteSet set;
  set.addBack(2);

  cout << set.popSmallest() << endl;
  cout << set.popSmallest() << endl;

  cin.get();
}
