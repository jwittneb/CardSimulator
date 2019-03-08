#ifndef __MONSTER_H__
#define __MONSTER_H__
#include "card.h"

class Monster : public Card {
  public:
    int attack;
    int defense;

    Monster(int attack, int defense): attack(attack), defense(defense) {} 
    ~Monster();
};
#endif
