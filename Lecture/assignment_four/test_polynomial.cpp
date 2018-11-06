#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

int main()
{
int p[] = {1, 1, 1};
int size = 3;

Polynomial pTest(p, size);

pTest.print();


    return 0;
}