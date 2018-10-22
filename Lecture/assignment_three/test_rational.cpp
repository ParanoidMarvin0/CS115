#include <iostream>
#include "rational.h"

using namespace std;

void H(const int h, Rational& a)
{
    Rational temp;

   if (h != 0)
   {   
    for(int i = 1; i<=h; i++)
         {
            temp.getComponents(1,i); 
            a = a.add(a,temp);
            a.print();
         }
         
    }
    
}

int main(){

Rational r1;

H(10, r1);



return 0;
}