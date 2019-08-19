#ifndef __BOARD_H__
#define __BOARD_H__
#include "player.h"
#include "card.h"

class Board {
  
  //Contains the cards on the corresponding side of the board
  Card* Player1Cards;
  Card* Player2Cards;

  //1 if player 1's turn, 2 if player 2's turn
  int currPlayer;

  public:
    void playCard(Player thePlayer);
    void declareAttack(Player thePlayer, Card attacker, Card defender=0);

    bool isGameOver();


};


#endif
