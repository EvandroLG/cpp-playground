#include <iostream>
#include <memory>
#include <type_traits>
#include <utility>

int main()
{
  std::unique_ptr<int> unPtr1 = std::make_unique<int>(25);

  // Print address
  std::cout << unPtr1 << std::endl;
  // Print value
  std::cout << *unPtr1 << std::endl;

  // Move the ownership of unPtr1 to unPtr2, and deallocate memory from unPtr1
  std::unique_ptr<int> unPtr2 = std::move(unPtr1);
  std::cout << unPtr2 << std::endl;
  std::cout << *unPtr2 << std::endl;

  std::shared_ptr<int> shPtr1 = std::make_shared<int>(10);
  std::shared_ptr<int> shPtr2 = shPtr1;

  std::cout << "Shared count: " << shPtr1.use_count() << std::endl;

  std::cin.get();
}
