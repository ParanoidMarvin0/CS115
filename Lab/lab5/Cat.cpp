#include "Cat.h"
#include <iostream>
using namespace std;

Cat::Cat()
{
    length=0.0;
    height=0.0;
    tailLength=0.0;
    eyeColor="";
    furClassification="";
    for (int i=0; i<5; i++)
      {
	furColors[i]="";
      }
  
}


Cat::Cat (double l, double h, double tL, string eC, string fCl, const string furCol[])
{
   int i = 0;
   length = l;
   height = h;
   tailLength = tL;
   eyeColor = eC;
   furClassification = fCl; //long, medium, short, none
   while (furCol[i] != "")
   {
	furColors[i] = furCol[i];
        i++;
   }
   furColors[i] = "";

}

void Cat::readCat () 
{
   int i = 0;
   cout << "Please decribe the cat" << endl;
   cout << "Please enter a length: ";
   cin >> length;
   cout << "Please enter a height: ";
   cin >> height;
   cout << "Please enter a tail length: ";
   cin >> tailLength;
   cout << "Please enter an eye colour: ";
   cin >> eyeColor;
   cout << "Please enter a description of the fur (long, medium, short, none): ";
   cin >> furClassification;
   cout << "Please enter the colours of the fur (separated by a space or a newline character). ";
   cout << "Add \"done\" at the end: ";
   cin >> furColors[i]; 
   while (furColors[i] != "done")
   {
       i++;
       cin >> furColors[i];
   }
   furColors[i] = "";
}

void Cat::printCat () const
{
   int i = 0;
   cout << "Length: "<< length << "  Height: "<< height 
        << "  Tail Length: " << tailLength << endl;
   cout << "Eye Color: " << eyeColor 
        << "  Fur Classification: " << furClassification << endl;
   cout << "Cat Colors: ";
   while (furColors[i] != "")
   {
       cout << furColors[i++] << " "; 
   }
   cout << endl;
}

bool Cat::isCalico () const
{
    if (furColors[3] != "")
        return false;
    for (int i=0; i< 3; i++)
    {
    	if (furColors[i] != "black" && 
            furColors[i] != "orange" && 
            furColors[i] != "white")
		return false;
    }
    return true;
}

bool Cat::isTaller (const Cat& cat2) const
{
    return (height > cat2.height);
}

bool Cat::sameEyeColor (const Cat& cat2) const
{
  return (eyeColor == cat2.eyeColor);
}

string Cat::getEyeColor () const
{
  return eyeColor;
}
