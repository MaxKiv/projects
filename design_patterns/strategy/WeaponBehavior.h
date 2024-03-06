#pragma once

#include <cstddef>

struct Damage {
  size_t physical;
  size_t magical;
};

class WeaponBehavior {
public:
  virtual Damage useWeapon() = 0;
};

