#include <iostream>
#include <cassert>
#include <cstdlib>
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
    getComponents(numer, denom);

}

Rational Rational::add (const Rational& a, const Rational& b) const
{
    Rational c;
    c.numer = a.numer*b.denom + a.denom*b.numer;
    c.denom = a.denom*b.denom;
    return c;
}

Rational Rational::sub (const Rational& a, const Rational& b) const
{
    Rational c;
    c.numer = a.numer*b.denom - a.denom*b.numer;
    c.denom = a.denom*b.denom;

    return c;
}

Rational Rational::multi(const Rational& a, const Rational& b) const
{
    Rational c;
    c.numer = a.numer*b.numer;
    c.denom = a.denom*b.denom;

    return c;
}

Rational Rational::div(const Rational& a, const Rational& b) const
{
    Rational c;
    c.numer = a.numer*b.denom;
    c.denom = a.denom*b.numer;

    return c;
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

void Rational::getComponents(long int& a, long int& b)
{
    long int gCommon = gcd(a, b); 
    a = a/gCommon;
    b = b/gCommon;

//put numerator and denominator in normal form;



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

void Rational::print() const
{
    Rational c(numer, denom);

    cout << c.numer << "   " << c.denom <<  "    ";

    if (c.numer == 0)
    {
        cout << "0" << endl;

    }
    else
    {
    if (posNeg(c.numer) != posNeg (c.denom))
    {
        cout << "-";
    }

    if (c.numer < c.denom)
    {
        cout << abs(c.numer) << "/" << abs(c.denom);
    }
    else if (c.numer >= c.denom)
    {
         long int q = c.numer / c.denom;
         long int r = c.numer % c.denom;
         if (r == 0)
         {
         cout << q;
         }
         if (r > 0)
         {
             if (posNeg(c.numer) != posNeg (c.denom))
             {
                 cout << abs(q) << "-" << abs(r) << "/" << abs(c.denom);             
            }
            else
            {
                cout << abs(q) << abs(r) << "/" << abs(c.denom);
            }
         }
    }
    
    }
    cout << endl;
}

bool Rational::posNeg(const long int& a) const
{
    if (a >= 0)
    {
        return true;
    }
    return false;
}

