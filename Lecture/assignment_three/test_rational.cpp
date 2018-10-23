#include <iostream>
#include "rational.h"

using namespace std;

void H(const long int h, Rational& a)
{
    Rational temp;
    long int i;
    
   if (h != 0)
   {   
    for(i = 1; i<=h; i++)
         {
            temp.getComponents(1,i); 
            a = a.add(a,temp);
            
         }
         
    }
    
}

void S(const long int s, Rational& a)
{
    Rational temp;
    long int i;
    
   if (s != 0)
   {   
    for(i = 1; i<=s; i++)
         {
            temp.getComponents(i,i+1);
            if (i % 2 == 0){             
                a = a.sub(a,temp);
                
            }
            else{
               a = a.add(a,temp);
               
            }
            
         }
         
    }
    
}

void findSN(const Rational& a)
{
Rational s;
long int count = 0;

while(!a.equal(a,s))
{
    s.getComponents(0,1);
    count++;
    S(count, s);
   
}
cout << "n = " << count << ": ";
s.print();

}

void findHN(const Rational& a)
{
Rational h;
long int count = 0;

while(a.less(h,a))
{
    h.getComponents(0,1);
    count++;
    H(count, h);
   
}
cout << "n = " << count << ": ";
h.print();

}

int main(){

Rational r1, r2, r3, r4;
Rational sN(533,840);
Rational hN(301,100);

H(10, r1);
S(10, r2);
cout << "Harmonic sum for H(10): ";
r1.print();
cout << endl << endl << "Alternating sum S(10): ";
r2.print();


r3 = r3.multi(r1, r2);
r4 = r4.div(r1, r2);
cout << endl << endl << "Multiplication of H(10) x S(10): ";
r3.print();
cout << endl << endl << "Division of H(10) / S(10): ";
r4.print();

cout << endl << endl << "Find Positive integer for S(n) = 533/840: " ;
findSN(sN);
cout << endl << endl << "Find Positive integer for H(n) > 301/100: ";
findHN(hN);


return 0;
}