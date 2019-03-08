#include <iostream>
#include "player.h"
#include "monster.h"
#include "cardList.h"

using namespace std;

// gameplan:
// Develop a Board class, Hand class (no draws yet), Attack functions
//
//
//

int main() {
  
  
  vector<Card> deck;

  deck.push_back(goblin);
  deck.push_back(goblin);
  deck.push_back(goblin);
  deck.push_back(fighter);
  deck.push_back(fighter);
  deck.push_back(mercenary);
  deck.push_back(mercenary);
  deck.push_back(goliath);
  deck.push_back(goliath);


  Player raindrop(deck);

  raindrop.drawCard();
  raindrop.drawCard();
  raindrop.drawCard();

  cout << raindrop.getCard(0).getName() << endl;
  cout << raindrop.getCard(1).getName() << endl;
  cout << raindrop.getCard(2).getName() << endl;

  cout << raindrop.getPlayerHP() << endl;
}
