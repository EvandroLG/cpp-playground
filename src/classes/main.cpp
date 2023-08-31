#include "./Player.cpp"
#include <iostream>
#include <string>

int main() {
  Player player;
  player.x = 5;
  player.Move(10, 20);

  std::cin.get();
}
