#ifndef __POLYNOMIAL_H___
#define __POLYNOMIAL_H___

#include "guarded_array.h"
#include "managed_array.h"


// Polynomial
//
// A class for handling polynomial operations, stored in a managed array 
//
class Polynomial{

public:
// Constructor
//
// Purpose: 
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: N/A
Polynomial();

// Constructor
//
// Purpose: 
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: N/A
Polynomial(const int a[], const int& size);
// Constructor
//
// Purpose: 
// Parameter(s): N/A
// Precondition: N/A
// Returns: 
// Side Effect: N/A

Polynomial(const Polynomial& p);


// evaluate
//
// Purpose: Compute value of polynomial for given value of x
// Parameter(s): 
//      <1>: poly: polynomial class
//      <2>: x: integer value for x variable in poly function
// Precondition: N/A
// Returns: long int value for computed polynomial
// Side Effect: None
//

long int evaluate(const int x) const; 

// add
//
// Purpose: Add one instance of polynomial to another
// Parameter(s): 
//          <1>: poly2: polynomial function to be added
// Precondition: N/A
// Returns: Polynomial function
// Side Effect: None
//

void add(const Polynomial& p);

// subtract
//
// Purpose: subtract one instance of Polynomial from another
// Parameter(s):
//<1> p - an instance of polynomial
// Precondition: None
// Returns: None
// Side Effect: subtract passed instance of polynomial from current instance
//

void subtract(const Polynomial& p);

// multiply
//
// Purpose: multiply one instance of Polynomial by another
// Parameter(s):
//<1> p - an instance of polynomial
// Precondition: None
// Returns: None
// Side Effect: multiply instances of polynomial together

void multiply(const Polynomial& p);

// multiply
//
// Purpose: multiply one instance of Polynomial by an integer
// Parameter(s):
//<1> p - an instance of polynomial
// Precondition: None
// Returns: None
// Side Effect: multiply instance of polynomial by integer

void multiply(const unsigned int a);

// raiseDegree
//
// Purpose: Multiply Polynomial by an exponential integer of form x^k
// Parameter(s):
//<1> p - an instance of polynomial
// Precondition: N/A
// Returns: None
// Side Effect: Current instance of Polynomial is raised to an exponential degree
void raiseDegree(const unsigned int a);

// equal 
//
// Purpose: Determine if two instances of polynomial are equal
// Parameter(s):
//<1> p - an instance of polynomial
// Precondition: N/A
// Returns: True if polynomials are equal or False if they are not equal
// Side Effect: None
bool equal(const Polynomial& p) const;

// getDegree
//
// Purpose: Return degree of polynomial instance
// Parameter(s): N/A
// Precondition: N/A
// Returns: integer value representing polynomial exponential degree
// Side Effect: N/A
int getDegree() const;

// getCoefficient 
//
// Purpose: return cooefficient of polynomial instance
// Parameter(s): N/A
// Precondition: N/A
// Returns: integer value representing coefficient
// Side Effect: None
int getCoefficient(const unsigned int k) const;

// Print 
//
// Purpose: Print out polynomial in normalized form
// Parameter(s): 
//<1> k: non negative term representing x^k
// Precondition: k > 0
// Returns: integer value at location k in managed array
// Side Effect: None
void print();

private:

ManagedArray polyArr;

};


#endif