#ifndef __PLAYER_H__
#define __PLAYER_H__
#include <vector>
#include "card.h"

class Player {
    std::vector<Card> cards;
    std::vector<Card> deckCards;
    std::vector<Card> destroyedCards;
 
    int health;
    int maxPP;
    int currPP;
    int currEvo;

  public:
    void drawCard();
    void playCard(int cardPos);
    Card getCard(int cardPos);
    
    void healPlayer(int amnt);
    void damagePlayer(int amnt);
    void useEvo();
    void gainEvos(int numEvos);

    int getPlayerHP();
    int getPlayerMaxPP();
    int getPlayerCurrPP();
    int getPlayerCurrEvo();

    Player(std::vector<Card> deck);
    ~Player();
};

#endif
