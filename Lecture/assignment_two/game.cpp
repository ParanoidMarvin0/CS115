#include<iostream>
#include<string>
#include "random.h"
#include "card.h"

using namespace std;

int main()
{
Card c[] = {
    {'h', 1, 6 },
    {'s', 1, 13},    
    {'d', 1, 3}
};

cout << cardNames(c[0]) << endl;
cout << cardNames(c[1]) << endl;
cout << cardNames(c[2]) << endl; 
    return 0;
}