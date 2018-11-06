#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

Polynomial::Polynomial(){

polyArr.insert(0,0);
};

Polynomial::Polynomial(const int a[], const int& size){
assert(a[size-1] != 0);

for (int i = 0; i < size; i++)
{
    polyArr.insert(i, a[i]);
}

};

Polynomial::Polynomial(const Polynomial& p){

assert(p.polyArr.size() != 0);

for (int i = 0; i < p.polyArr.size(); i++)
{
    polyArr.insert(i, p.polyArr.read(i));
}
};

void Polynomial::add(const Polynomial& p){

if (getDegree < p.getDegree)
{
    for (int i = polyArr.size(); i < p.polyArr.size(); i++)
    {
        polyArr.insert(i, p.polyArr.read(i));
    }
}

    
};

void Polynomial::subtract(const Polynomial& p){};

void Polynomial::multiply(const Polynomial& p){};

void Polynomial::multiply(const unsigned int a){};

void Polynomial::raiseDegree(const unsigned int a){};

bool Polynomial::equal(const Polynomial& p) const{};

int Polynomial::getDegree() const{
    
    return polyArr.size() - 1;

};

int Polynomial::getCoefficient(const unsigned int k) const{
    assert(k > 0);

    return polyArr.read(k+1);

};

void Polynomial::print(){

    cout << "The polynomial is size: " << polyArr.size() << endl;

    for (int i = 0; i < polyArr.size(); i++ )
    {
        cout << polyArr.read(i) << " ";
        }

    cout << endl << endl;

};

