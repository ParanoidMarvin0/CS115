#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "pt2_managed_array.h"
#include "container.h"
// #include "process.h"

// priorityQueue
//
// Purpose: This class implements a first-in-first-out retrieval strategy using integers. 
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

class priorityQueue : public Container {

    public:
// priorityQueue
//
// Purpose: Default Contructor
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect: none
priorityQueue();

// priorityQueue
//
// Purpose:  
// Parameter(s): N/A 
// Precondition: N/A
// Returns: 
// Side Effect:

//priorityQueue();

// insert
//
// Purpose: insert elements, sorting in ascending order
// Parameter(s):
//<1> int x: value to be inserted into array 
// Precondition:    <1>value is an integer
//                  <2>array is always in sorted order
// Returns: none
// Side Effect: integer added to end of array
void insert(int x);

// remove
//
// Purpose: retrieve item from front of container array
// Parameter(s): N/A 
// Precondition: <1> array is always sorted in ascending order
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
    ManagedArray pQArr;
};


#endif

