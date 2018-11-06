#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
Polynomial zero;

cout << "The zero polynomial value is: ";
zero.print();
cout << "The degree of the zero polynomial is: " << zero.getDegree();

int a1[3] = {1,1,1};
int a2[5] = {0,2,3};

Polynomial p1(a1,3);
Polynomial p2(a2,5);

p1.evaluate(2);
cout << "testing evaluate P1: ";
p1.print();


    return 0;
}