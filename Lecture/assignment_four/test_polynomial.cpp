#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
 int p1[3] = {1, 1, 1};   //consider using sizeof()/sizeof() to calculate array length
 int p2[5] = {1, 2, -3, 4, 5};
 int p3[2] = {2, -2};
 int p4[5] = {3, 0, -3, 4, 5};


 Polynomial pTest(p1, 3);
 Polynomial pTest2(p2, 5);
 Polynomial pTest3(p3, 2);
 Polynomial pZero;
 Polynomial pTest4(p4, 5);

cout << "testing new print functions" << endl;

cout << "Pzero" << endl;
pZero.print();

cout << "P1" << endl;
pTest.multiply(pTest2);
pTest.print();

cout << "P2*P4" << endl;
pTest2.multiply(pTest4);
pTest2.print();

cout << "P3*P4" << endl;
pTest3.multiply(pTest4);
pTest3.print();

cout << "P4*5" << endl;
pTest4.multiply(5);
pTest4.print();


    return 0;
}