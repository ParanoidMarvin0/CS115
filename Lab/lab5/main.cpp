#include "Cat.h"
#include <iostream>
using namespace std;

int main()
{
   Cat myCat;

   string colors[5];
   colors[0] = "brown";
   colors[1] = "";
   Cat averageCat(46, 24, 30, "green", "medium", colors);

   myCat.readCat();

   cout << "The average cat has " << averageCat.getEyeColor() << " eyes" << endl;  

   cout << "-------------------------------------------------------"<< endl;
   cout << "This is myCat:" << endl;
   myCat.printCat();
   
   if (myCat.sameEyeColor(averageCat))
   {
	cout << "My cat has the same color eyes\n";
   }
   else
   {
	cout << "My cat has different color eyes\n";
   }
   if (myCat.isCalico())
   {
	cout << "My cat is a calico\n";
   }
  
   return 0;
}
