
#include "King.h"
#include "Queen.h"
#include "Troll.h"
#include "Weapons.h"

#include <memory>

int main() {
  std::array<std::unique_ptr<Character>, 3> characters = {
    std::make_unique<King>(),
    std::make_unique<Queen>(),
    std::make_unique<Troll>(),
  };
  characters[0]->setWeapon(std::make_unique<KnifeBehavior>());
  characters[1]->setWeapon(std::make_unique<StaffBehavior>());
  characters[2]->setWeapon(std::make_unique<AxeBehavior>());

  for(const auto & dude: characters) {
    dude->fight();
  }

  characters[0]->setWeapon(std::make_unique<SwordBehavior>());
  characters[0]->fight();
  characters[0]->setWeapon(std::make_unique<StaffBehavior>());
  characters[0]->fight();

}
