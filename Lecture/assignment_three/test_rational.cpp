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
            answer = answer + (1.0/i);
         }
         
    }
    

}

int main(){


Rational r1;
Rational r2(1,3);
Rational r3(13,-5);
Rational r4(21, 36);

r1.add()

r1.print();
r2.print();
r3.print();
r4.print();

return 0;
}