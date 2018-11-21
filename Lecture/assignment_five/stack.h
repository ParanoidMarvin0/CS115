#ifndef __STACK_H__
#define __STACK_H__
#include "managed_array.h"
#include "container.h"

// Stack
//
// Purpose: This class implements a first-in-first-out retrieval strategy using integers. 
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

class Stack : public Container {

    public:
// stack
//
// Purpose: Default Contructor
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect: none
Stack();

// stack
//
// Purpose:  
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

// insert
//
// Purpose: insert elements into array in order received
// Parameter(s):
//<1> int x: value to be inserted into array 
// Precondition: value is an integer
// Returns: none
// Side Effect: integer added to end of array
void insert(int x);

// remove
//
// Purpose: retrieve item from back of container array
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

int remove();

// empty
//
// Purpose: check if array is empty
// Parameter(s): N/A 
// Precondition: N/A
// Returns: true if array is empty
// Side Effect: none

bool empty() const;


    protected:
    private:
    ManagedArray stackArr;
};


#endif

