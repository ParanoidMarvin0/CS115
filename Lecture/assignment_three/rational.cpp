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

long int Rational::add (const Rational& a, const Rational& b) const
{
    long int resultNum = a.numer*b.denom + a.denom*b.numer;
    long int resultDen = a.denom*b.denom;

    return (resultNum, resultDen);
}

long int Rational::sub (const Rational& a, const Rational& b) const
{
    long int resultNum = a.numer*b.denom - a.denom*b.numer;
    long int resultDen = a.denom*b.denom;

    return (resultNum, resultDen);
}

long int Rational::multi(const Rational& a, const Rational& b) const
{
    long int resultNum = a.numer*b.numer;
    long int resultDen = a.denom*b.denom;

    return (resultNum, resultDen);
}

long int Rational::div(const Rational& a, const Rational& b) const
{
    long int resultNum = a.numer*b.denom;
    long int resultDen = a.denom*b.numer;

    return (resultNum, resultDen);
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

void Rational::print(const long int& n, const long int& d) const
{
    cout << numer << "   " << denom <<  "    ";
    if (numer == 0)
    {
        cout << "0" << endl;

    }
    else
    {
    if (posNeg(numer) != posNeg (denom))
    {
        cout << "-";
    }

    if ()
    cout << abs(numer) << "/" << abs(denom) << endl;
    }
}

bool Rational::posNeg(const long int& a) const
{
    if (a >= 0)
    {
        return true;
    }
    return false;
}

// Following the above, let N be the absolute value of the numerator and
// D be the absolute value of the denominator.
// If N < D then "N/D" should be printed after the sign (if there is
// one).
// If N ≥ D then the following printing procedure is applied.
// Let Q = N / D and R = N % D.
// If R = 0, simply print Q after the sign (if there is one).
// If R > 0 then
// print "Q+R/D" if a negative sign has NOT been printed
// print "Q-R/D" if a negative sign has been printed
// The output does NOT include a newline character.
// Here are some example output.
// Numerator Denominator Output
// 0 1 0
// 2 3 2/3
// -2 3 -2/3
// 3 2 1+1/2
// -3 2 -1-1/2
// 6 3 2
// -6 3 -2