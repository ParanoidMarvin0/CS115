#include "Cat.h"
#include <iostream>
using namespace std;

void initCat (Cat& cat, double l, double h, double tL, string eC, string fCl, const string furCol[])
{
   int i = 0;
   cat.length = l;
   cat.height = h;
   cat.tailLength = tL;
   cat.eyeColour = eC;
   cat.furClassification = fCl; //long, medium, short, none
   while (furCol[i] != "")
   {
	cat.furColours[i] = furCol[i];
        i++;
   }
   cat.furColours[i] = "";

}

void readCat (Cat& cat)
{
   int i = 0;
   cout << "Please decribe the cat" << endl;
   cout << "Please enter a length: ";
   cin >> cat.length;
   cout << "Please enter a height: ";
   cin >> cat.height;
   cout << "Please enter a tail length: ";
   cin >> cat.tailLength;
   cout << "Please enter an eye colour: ";
   cin >> cat.eyeColour;
   cout << "Please enter a description of the fur (long, medium, short, none): ";
   cin >> cat.furClassification;
   cout << "Please enter the colours of the fur (separated by a space or a newline character). ";
   cout << "Add \"done\" at the end: ";
   cin >> cat.furColours[i]; 
   while (cat.furColours[i] != "done")
   {
       i++;
       cin >> cat.furColours[i]; 
   }
   cat.furColours[i] = "";
}

void printCat (const Cat& cat)
{
   int i = 0;
   cout << "Length: "<< cat.length << "  Height: "<< cat.height 
        << "  Tail Length: " << cat.tailLength << endl;
   cout << "Eye Colour: " << cat.eyeColour 
        << "  Fur Classification: " << cat.furClassification << endl;
   cout << "Cat Colours: ";
   while (cat.furColours[i] != "")
   {
       cout << cat.furColours[i++] << " "; 
   }
   cout << endl;
}

bool isCalico (const Cat& cat)
{
    if (cat.furColours[3] != "")
        return false;
    for (int i=0; i< 3; i++)
    {
    	if (cat.furColours[i] != "black" && 
            cat.furColours[i] != "orange" && 
            cat.furColours[i] != "white")
		return false;
    }
    return true;
}

bool isTaller (const Cat& cat1, const Cat& cat2)
{
    return (cat1.height > cat2.height);
}
