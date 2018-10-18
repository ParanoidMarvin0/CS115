#ifndef __RATIONAL_H__
#define __RATIONAL_H__


long int resultNum, resultDen;

class Rational
{

 private:
    long int numer, denom;

   

    public:
//Rational
//
// Purpose: Constructor
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: initiates non zero instance using normal form.
//

Rational();

// Rational
// 
// Purpose: Constructor 
// Parameter(s): A numberator and Denominator
// Precondition: Denominator != 0
// Returns: None
// Side Effect: initiate instance with parameters
//

Rational(long int a, long int b);

// add
//
// Purpose: Add one instance of Rational to another
// Parameter(s): 
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: sum of rational
// Side Effect: N/A
//
long int add(Rational a, Rational b) const;

// subtract
//
// Purpose: Subtract one instance of Rational from another
// Parameter(s): 
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: sum of rational
// Side Effect: N/A
//
long int sub(Rational a, Rational b) const;
// multiply
//
// Purpose: To muliply one instance of Rational with another
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: 
// Side Effect: N/A
//
long int multi(Rational a, Rational b) const;
// divide
//
// Purpose: To divate one instance of Rational with another
// Parameter(s):
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: 
// Side Effect: N/A
//
long int div(Rational a, Rational b) const; 
// equal
//
// Purpose: Test if two instances of Rational are equal
// Parameter(s):
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: 
// Side Effect: N/A
//

bool equal(Rational a, Rational b) const;

// less
//
// Purpose: Test if one instance of Rational is less than another
// Parameter(s):
// <1> Rational instance of numerator 
// <2> Rational instance of denominator
// Precondition: 
//      - denominator != 0
// Returns: 
// Side Effect: N/A
//

bool less(Rational a, Rational b) const;

// getComponents
//
// Purpose: Retrieve a numberator and denominator
// Parameter(s): N/A
// Precondition: N/A
// Returns: Numer and Denom
// Side Effect: set initial numerator and denominator values.
//

long int getComponents();

// print
//
// Purpose: 
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: N/A
//

void print();

long int gcd(long int a, long int b);

long int lcm(long int a, long int b);
   

};


#endif