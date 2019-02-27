#include "player.h"
#include <algorithm>
#include <random>
#include <chrono>

void Player::playCard(int cardPos) {
  cards.erase(cards.begin() + cardPos);
}

Card Player::getCard(int cardPos) {
  return cards[cardPos];
}

void Player::healPlayer(int amnt) {
  health += amnt;
}

void Player::damagePlayer(int amnt) {
  health -= amnt;
}

void Player::useEvo() {
  currEvo--;
}

void Player::gainEvos(int numEvos) {
  currEvo += numEvos;
}

int Player::getPlayerHP() {
  return health;
}

int Player::getPlayerMaxPP() {
  return maxPP;
}

int Player::getPlayerCurrPP() {
  return currPP;
}

int Player::getPlayerCurrEvo() {
  return currEvo;
}

void Player::drawCard() {

  // obtain a time-based seed:
  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  std::default_random_engine rng(seed);

  shuffle(deckCards.begin(), deckCards.end(), rng);
  cards.push_back(deckCards.back());
  deckCards.pop_back();
}

Player::Player(std::vector<Card> deck) {
  std::vector<Card> none1;
  std::vector<Card> none2;

  cards = none1;
  deckCards = deck;
  destroyedCards = none2;

  health = 20;
  currEvo = 2;
  maxPP = 1;
  currPP = 1;
}

Player::~Player() {
}
