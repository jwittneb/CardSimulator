#include "card.h"

//int Card::getAttack() {
//  return attack;
//}


//int Card::getDefense() {
//  return defense;
//}

std::string Card::getName() {
  return name;
}

int Card::getCost() {
  return cost;
}

Card::Card() {
  cost = 0;
  name = "";
}

Card::Card(std::string decName, int decCost) {
  cost = decCost;
  //attack = decAttack;
  //defense = decDefense;
  name = decName;
}

Card::~Card() {
}
