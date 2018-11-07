#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
int pX[6] = {-1, 0, 3, 0, 0, -2};
int qX[6] = {1, 0, 0, 1, 0, 2};

Polynomial zero;
Polynomial p1(pX,6);
Polynomial p2(pX,6);
Polynomial p3(pX,6);
Polynomial q1(qX,6);
Polynomial q2(qX,6);
Polynomial q3(qX,6);

cout << "The zero polynomial value is: ";
zero.print();
cout << "The degree of the zero polynomial is: " << zero.getDegree() << endl;
cout << "The value of the zero polynomial when x=1 is: " << zero.evaluate(1) << endl;
cout << "The polynomial P(x) is: ";
p1.print();
cout << "The degree of P(x) is: " << p1.getDegree() << endl;
cout << "The value of P(x) when x=1 is: " << p1.evaluate(1) << endl;
cout << "The value of P(x) when x=-2 is: " << p1.evaluate(-2) << endl;
cout << "The polynomial P(x) is: ";
q1.print();
cout << "P(x) + Q(x) = ";
p1.add(q1);
p1.print();

cout << "P(x) - Q(x) = ";
p2.subtract(q1);
p2.print();

cout << "4P(x) = ";
p3.multiply(4);
p3.print();


    return 0;
}