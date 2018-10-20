#include <iostream>
#include "rational.h"

using namespace std;

long int H()
{
    int i;
    int count = 10;
    long int answer;
    answer=0;
    while(count != 0)
    {
         for(i=1;i<=count;i++)
         {
            answer = answer + (1.0/i);  //h.add()
         }
         
    }
    

}

int main(){


Rational r1;
Rational r2(1,21);
Rational r3(2,7);

r1 = r1.add(r2,r3);

r2.print();
r3.print();
r1.print();


return 0;
}