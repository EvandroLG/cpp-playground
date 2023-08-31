#include <iostream>

void log(const char *message);

int multiply(int a, int b) { return a * b; }

int main() {
  log("Hello World");
  int result = multiply(6, 3);
  std::cout << result << std::endl;
  std::cin.get();
}
