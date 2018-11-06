#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
int p1[3] = {1, 1, 1};   //consider using sizeof()/sizeof() to calculate array length
int p2[3] = {1, 2, 3};
int p3[4] = {1, -2, -3, 4};
int p4[5] = {0, 1, 5, 0, 0};


Polynomial pTest(p1, 3);
Polynomial pTest2(p2, 3);
Polynomial pTest3(p3, 4);
Polynomial pTest4(p4, 5);
Polynomial pTest5(pTest4);

pTest.print();

pTest2.print();
pTest3.print();
pTest4.print();
pTest5.print();


    return 0;
}