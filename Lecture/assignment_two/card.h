#ifndef _CARD_H
#define _CARD_H
#include<string>

enum Suit{s, d, h, c};

struct Card
{
    Suit suit;
    int rank;    
};

std::string cardNames(Card& c);

bool cardValue(Card& c, int indexA, int indexB);

bool sameSuit();


void initDeck();


void shuffleDeck(Card& c);
void printDeck();

void readDeck();


#endif