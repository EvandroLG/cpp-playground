#include <iostream>

int main() {
  int arr[] = {10, 20, 30, 40, 50};
  int length = sizeof(arr) / sizeof(int);

  for (int i = 0; i < length; i++) {
    std::cout << i << " - " << arr[i] << std::endl;
  }

  int i = 0;
  while (i < 5) {
    std::cout << "Hello - " << i << std::endl;
    i++;
  }

  std::cin.get();
}
