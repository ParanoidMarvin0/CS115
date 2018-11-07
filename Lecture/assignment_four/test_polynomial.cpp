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
cout << "The degree of the zero polynomial is: " << zero.getDegree() << endl;



    return 0;
}