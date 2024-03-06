#pragma once

#include <iostream>

#include "Character.h"

class King : public Character {
  void fight();
};

void King::fight() {
  std::cout << "King fighting ";
  Character::getDamage();
}
