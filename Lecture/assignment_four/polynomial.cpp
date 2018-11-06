#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

Polynomial::Polynomial(){};

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
int pAdd = 0;

if (getDegree() < p.getDegree())
{
    for (int i = polyArr.size(); i < p.polyArr.size(); i++)
    {
        polyArr.insert(i, 0);
    }
}

for (int j = 0; j < p.polyArr.size(); j++)
    {   
        pAdd = polyArr.read(j) + p.polyArr.read(j);

        polyArr.write(j, pAdd);
    }

    
};

void Polynomial::subtract(const Polynomial& p){
  int pSub = 0;

if (getDegree() < p.getDegree())
{
    for (int i = polyArr.size(); i < p.polyArr.size(); i++)
    {
        polyArr.insert(i, 0);
    }
}

for (int j = 0; j < p.polyArr.size(); j++)
    {   
        pSub = polyArr.read(j) - p.polyArr.read(j);

        polyArr.write(j, pSub);
    }
};

void Polynomial::multiply(const Polynomial& p){};

void Polynomial::multiply(const unsigned int a){};

void Polynomial::raiseDegree(const unsigned int a){
    for (int i = 0; i < a; i++)
    {
        polyArr.insert(i,0);
    }
};

bool Polynomial::equal(const Polynomial& p) const{
    
    if (polyArr.size() != p.polyArr.size())
        {return false;}

    for (int i=0; i<polyArr.size(); i++)
    {
        if (polyArr.read(i) != p.polyArr.read(i))
            {return false;}
    }
    return true;
};

int Polynomial::getDegree() const{
    
    return polyArr.size() - 1;

};

int Polynomial::getCoefficient(const unsigned int k) const{
    assert(k > 0);

    return polyArr.read(k+1);

};

void Polynomial::print(){

    if (polyArr.size()==0)
    {
    cout << "0" << endl;
    }
    else{ 
    if (polyArr.read(0)!=0){
        cout << polyArr.read(0) << " ";
    }
    for (int i = 1; i < polyArr.size(); i++ )
    {
        if (polyArr.read(i)!=0)
            cout << polyArr.read(i) << "x^" << i << " ";
    }

    cout << endl << endl;
    }
};

