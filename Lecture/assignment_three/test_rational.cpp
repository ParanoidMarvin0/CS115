#include <iostream>
#include "rational.h"

using namespace std;

void H(const long int h, Rational& a)
{
    Rational temp;
    long int i;
    cout << "testing Harmonic function where n = " << h << endl;
   if (h != 0)
   {   
    for(i = 1; i<=h; i++)
         {
            temp.getComponents(1,i); 
            a = a.add(a,temp);
            a.print();
         }
         
    }
    
}

void S(const long int s, Rational& a)
{
    Rational temp;
    long int i;
    cout << "testing S function where n = " << s << endl;
   if (s != 0)
   {   
    for(i = 1; i<=s; i++)
         {
            temp.getComponents(i,i+1);
            temp.print();
            if (i % 2 == 0){             
                a = a.sub(a,temp);
                a.print();
            }
            else{
               a = a.add(a,temp);
               a.print();
            }
         }
         
    }
    
}

int main(){

Rational r1, r2;
r1.print();
r2.print();

H(10, r1);
S(10, r2);


return 0;
}