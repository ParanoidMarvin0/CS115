#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "managed_array.h"
#include "container.h"
// #include "process.h"

// Queue
//
// Purpose: This class implements a first-in-first-out retrieval strategy using integers. 
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

class Queue : public Container {

    public:
// Queue
//
// Purpose: Default Contructor
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect: none
Queue();

// Queue
//
// Purpose:  
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

//Queue();

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
// Purpose: retrieve item from front of container array
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
    ManagedArray queueArr;
};


#endif

