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
            if (i % 2 == 0){             
                a = a.sub(a,temp);
                
            }
            else{
               a = a.add(a,temp);
               
            }
         }
         
    }
    
}

void testSN(const Rational& a)
{
Rational s;
long int count = 1;

while(!a.equal(a,s))
{
    S(count, s);
    count++;
}
cout << "testSN completed" << endl;
a.print();
s.print();
cout << endl << "n = " << count << endl;

}

int main(){

Rational r1, r2, r3, r4;
Rational sN(533,840);
Rational hN(301,100);

cout << "testing function testSN" << endl;

testSN(sN);



// H(10, r1);
// S(10, r2);
// r1.print();
// r2.print();

// r3 = r3.multi(r1, r2);
// r4 = r4.div(r1, r2);

// r3.print();
// r4.print();


return 0;
}