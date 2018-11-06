#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
 int p1[3] = {1, 1, 1};   //consider using sizeof()/sizeof() to calculate array length
 int p2[5] = {1, 2, 3, 4, 5};

// int p3[4] = {1, -2, -3, 4};
// int p4[5] = {0, 1, 5, 0, 2};


 Polynomial pTest(p1, 3);
 Polynomial pTest2(p2, 5);
// Polynomial pTest3(p3, 4);
// Polynomial pTest4(p4, 5);
// Polynomial pTest5(pTest2);


cout << "testing P1" << endl;
pTest.print();

cout << "testing P2"  << endl;
pTest2.print();

cout << "testing add function" << endl;
pTest.add(pTest2);
pTest.print();

// pTest3.print();

// cout << "testing P4" << endl;
// pTest4.print();

// cout << "testing P5" << endl;
// pTest5.print();


    return 0;
}