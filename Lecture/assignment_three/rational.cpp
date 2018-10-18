#include <iostream>
#include <cassert>
#include "rational.h"

using namespace std;


Rational::Rational()
{
    numer = 0;
    denom = 0;
}

Rational::Rational(long int a, long int b)
{
    assert(b != 0);
    numer = a;
    denom = b;
}

long int Rational::add (const Rational& a, const Rational& b) const
{
    resultNum = a.numer*b.denom + a.denom*b.numer;
    resultDen = a.denom*b.denom;
}

long int Rational::sub (const Rational& a, const Rational& b) const
{
    resultNum = a.numer*b.denom - a.denom*b.numer;
    resultDen = a.denom*b.denom;
}

long int Rational::multi(const Rational& a, const Rational& b) const
{
    resultNum = a.numer*b.numer;
    resultDen = a.denom*b.denom;
}

long int Rational::div(const Rational& a, const Rational& b) const
{
    resultNum = a.numer*b.denom;
    resultDen = a.denom*b.numer;
}

bool Rational::equal(const Rational& a, const Rational& b) const
{
    if (a.numer == b.numer && a.denom == b.denom)
    {
        return true;
    }
    return false;
}

bool Rational::less(const Rational& a, const Rational& b) const
{
    float n1 = a.numer/a.denom;
    float n2 = b.numer/b.denom;

    if (n1 < n2)
    {
        return true;
    }
    return false;

}

long int Rational::getComponents()
{
    long int n1, n2;
    cout << "Enter value for Numerator: ";
    cin >> n1;
    cout << "Enter value for Denominator: ";
    cin >> n2;


//put numerator and denominator in normal form;

return(n1, n2);

}

long int Rational::gcd(long int a, long int b)
{
    while (b != 0) {
    long int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

long int Rational::lcm(long int a, long int b)
{
    return a * b / gcd(a, b);
}

void Rational::print()
{
    cout << numer << "//" << denom << endl;
}