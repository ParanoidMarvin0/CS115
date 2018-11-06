#include<iostream>
#include<cassert>
#include "managed_array.h"
#include "guarded_array.h"
#include "polynomial.h"

using namespace std;

Polynomial::Polynomial(){


    ManagedArray polynomial(0);

};

Polynomial::Polynomial(const int& a, const int& size){};

Polynomial::Polynomial(Polynomial& p){};

void Polynomial::add(const Polynomial& p){};

void Polynomial::subtract(const Polynomial& p){};

void Polynomial::multiply(const Polynomial& p){};

void Polynomial::multiply(const unsigned int a){};

void Polynomial::raiseDegree(const unsigned int a){};

bool Polynomial::equal(const Polynomial& p) const{};

int Polynomial::getDegree(){};

int Polynomial::getCoefficient(){};

void Polynomial::print(){

    cout << "The polynomial is: " ;

    for (int i = 0; i > polynomial.length(); i++ )
    {
        cout << polynomial.retrieve(i) << " ";
    }
};

