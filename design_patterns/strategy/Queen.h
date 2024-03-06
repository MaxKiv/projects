#pragma once

#include <iostream>

#include "Character.h"

class Queen : public Character {
  void fight();
};

void Queen::fight() {
  std::cout << "Queen fighting ";
  Character::getDamage();
}
