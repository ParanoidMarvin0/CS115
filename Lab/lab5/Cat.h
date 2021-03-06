#ifndef __Cat_h__
#define __Cat_h__
#include <string>
using namespace std;

class Cat
{
   double length;
   double height;
   double tailLength;
   string eyeColor;
   string furClassification; //long, medium, short, none
   string furColors[5];

 public:   
   Cat(); //constructor
   Cat (double, double, double, string, string, const string[]);
   void readCat ();
   void printCat () const;
   bool isCalico () const; 
   bool isTaller (const Cat& cat) const;  
   bool sameEyeColor (const Cat& cat) const; //one parameter
   string getEyeColor () const;
};

//struct Cat
//{
//   double length;
//   double height;
//   double tailLength;
//   string eyeColour;
//   string furClassification; //long, medium, short, none
//   string furColours[5];
//};

//void initCat (Cat&, double, double, double, string, string, const string[]);
//void readCat (Cat&);
//void printCat (const Cat&);
//bool isCalico (const Cat&);
//bool isTaller (const Cat&, const Cat&);

#endif
