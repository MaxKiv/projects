#include "WeaponBehavior.h"

class KnifeBehavior: public WeaponBehavior {
  Damage useWeapon() {
    return {
      .physical = 1,
      .magical = 0,
    };
  };
};

class AxeBehavior: public WeaponBehavior {
  Damage useWeapon() {
    return {
      .physical = 3,
      .magical = 0,
    };
  };
};

class SwordBehavior: public WeaponBehavior {
  Damage useWeapon() {
    return {
      .physical = 2,
      .magical = 0,
    };
  };
};

class StaffBehavior: public WeaponBehavior {
  Damage useWeapon() {
    return {
      .physical = 1,
      .magical = 1,
    };
  };
};

