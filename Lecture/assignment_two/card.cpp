#include<iostream>

#include "card.h"

using namespace std;

string cardNames(Card& c)
{
string cardStr = "";

        if (c.suit == 's')
        {
            cardStr = "Spade ";
        }
        else if (c.suit == 'c')
        {
            cardStr = "Club ";
        }
        else if (c.suit == 'h')
        {
            cardStr = "Heart ";
        }
        else if (c.suit == 'd')
        {
            cardStr = "Diamond ";
        }


        if (c.rank == 11)
        {
            cardStr += "Jack";
        }    
        else if (c.rank == 12)
        {
            cardStr += "Queen";
        }        
        else if (c.rank == 13)
        {
            cardStr += "King";
        }        
        else if (c.rank == 14)
        {
            cardStr += "Ace";
        }
        else
        {
            cardStr += to_string(c.rank);
        }

return cardStr; 
}

bool cardValue(Card& c, int indexA, int indexB)
{

}

// bool sameSuit()
// {}

// void initDeck()
// {}

// void shuffleDeck()
// {}

// void printDeck(){}

// void readDeck(){}