#include "card.h"

int Card::getAttack() {
  return attack;
}


int Card::getDefense() {
  return defense;
}

std::string Card::getName() {
  return name;
}

int Card::getCost() {
  return cost;
}

Card::Card(std::string decName, int decCost, int decAttack, int decDefense) {
  cost = decCost;
  attack = decAttack;
  defense = decDefense;
  name = decName;
}

Card::~Card() {
}
