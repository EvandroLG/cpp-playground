#include <iostream>
#include <memory>
#include <mutex>

struct Resource
{
  Resource() { std::cout << "Resource object created!\n"; }
  ~Resource() { std::cout << "Resource object destroyed!\n"; }
};

int main()
{
  // If we use new/delete, the programmer manages the lifetime
  Resource *resource1 = new Resource;
  // Free the resource
  delete resource1;

  // When using smart pointers, they get freed automatically when
  // the pointer goes out of scope
  std::unique_ptr<Resource> resource2(new Resource);
}
