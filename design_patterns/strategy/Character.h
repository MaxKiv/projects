#pragma once

#include "WeaponBehavior.h"
#include <memory>
#include <iostream>

class Character {
  std::unique_ptr<WeaponBehavior> weapon;
public:
  virtual void fight() = 0;

  void getDamage() {
    auto damage = weapon->useWeapon();
    std::cout << "Hitting for " << damage.physical << " phys, "
              << damage.magical << " mag\n";
  };

  void setWeapon(std::unique_ptr<WeaponBehavior> weapon) {
    this->weapon = std::move(weapon);
  }
};

