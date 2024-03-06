#pragma once

#include <iostream>

#include "Character.h"

class Troll : public Character {
  void fight();
};

void Troll::fight() {
  std::cout << "Troll fighting ";
  Character::getDamage();
}
