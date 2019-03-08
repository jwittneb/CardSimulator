#ifndef __CARD_H__
#define __CARD_H__
#include <string>

class Card {
    std::string name;
    int cost;

  public:
    int getCost();
    std::string getName();

    Card();
    Card(std::string name, int cost);
    ~Card();
};

#endif
