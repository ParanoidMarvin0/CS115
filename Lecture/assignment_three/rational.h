#ifndef __RATIONAL_H__
#define __RATIONAL_H__


class Rational
{

private:
long int numer, denom; //class values for numerator and denominator

//GCD
//
// Purpose: using Euclidean algorithym to calculate greatest common denominator
// Parameter(s):
// <1> Numerator: rational value numerator
// <2> Denominator: rational value denominator
// Precondition: N/A
// Returns: 
// a: greatest common denominator
// Side Effect: N/A
//

long int gcd(long int a, long int b);

//LCM
//
// Purpose: Calculate lowest common multiple
// Parameter(s): 
// <1> Numerator
// <2> Denominator
// Precondition: N/A
// Returns: lowest common multiple
// Side Effect: 
//

long int lcm(long int a, long int b);
   
// posNeg
//
// Purpose: check int for positve or negative value
// Parameter(s):
// a: any integer
// Precondition: N/A
// Returns: True if integer is positive, False if negative
// Side Effect: N/A
//

bool posNeg(const long int& a) const;

    public:

// getComponents
//
// Purpose: Convert Rational to normal form
// Parameter(s): N/A
// Precondition: N/A
// Returns:
// Side Effect: use gcd() to convert 
//

void getComponents(const long int& a, const long int& b);

//Rational
//
// Purpose: Constructor
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: initiates zero instance using normal form.
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
// <1> a: long int value representing numerator 
// <2> b: long int value representing denominator
// Precondition: 
//      - denominator != 0
// Returns: sum of rational
// Side Effect: N/A
//
Rational add(const Rational& a, const Rational& b) const;

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
Rational sub(const Rational& a, const Rational& b) const;
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
Rational multi(const Rational& a, const Rational& b) const;
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
Rational div(const Rational& a, const Rational& b) const; 
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

bool equal(const Rational& a, const Rational& b) const;

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

bool less(const Rational& a, const Rational& b) const;


// print
//
// Purpose: 
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: N/A
//

void print() const;

   

};


#endif