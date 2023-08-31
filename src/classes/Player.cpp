#include "./Entity.cpp"
#include <iostream>

class Player : public Entity {
public:
  const char *name;

  void PrintName() { std::cout << name << std::endl; }
};
