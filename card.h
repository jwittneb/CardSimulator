#ifndef __CARD_H__
#define __CARD_H__
#include <string>

class Card {
    std::string name;
    int cost;
    int attack;
    int defense;

  public:
    int getCost();
    int getAttack();
    int getDefense();
    std::string getName();

    Card(std::string name, int cost, int attack, int defense);
    ~Card();
};

#endif
