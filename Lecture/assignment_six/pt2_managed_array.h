#ifndef __PT2_MANAGED_ARRAY_H__
#define __PT2_MANAGED_ARRAY_H__

#include "pt2_guarded_array.h"

//
// ManagedArray
// - A wrapper class for C++ arrays to facilitate insertion and removal of
//   array elements.
// - Every instance of ManagedArray has a size that can be increased
//   until the maximum capacity MAX_LENGTH is reached.
//

class ManagedArray {
public:
  //
  // Constructor
  //
  // Purpose: Initializes array to have zero size.
  // Argument(s): N/A
  // Side Effect: The array is initialized to be empty.
  // Return: N/A
  //

  ManagedArray();

  //
  // Constructor
  //
  // Purpose: Initializes array to a given size.  All array elements
  //          are initialized to zero.
  // Argument(s):
  //  N : size of array
  // Precondition: N <= MAX_LENGTH
  // Side Effect: The array is initialized to contain N occurrences
  //              of the number zero.
  // Return: N/A
  //

  ManagedArray(unsigned N);

  //
  // Constructor
  //
  // Purpose: Initializes array to a given size.  All array elements
  //          are initialized to x.
  // Argument(s):
  //  N : size of array
  //  x : initial value of array elements
  // Precondition: N <= MAX_LENGTH
  // Side Effect: The array is initialized to contain N occurrences
  //              of x.
  // Return: N/A
  //

  ManagedArray(unsigned N, ItemType x);

  //
  //Copy Constructor
  //
  // Purpose: initialize instance using another instance
  // Argument(s):
  //  a : an instance of managedarray that will be copied to new array
  // Side Effect: new instance initialized with all elements equal to passed instance.
  // Return: N/A
  //

  ManagedArray(const ManagedArray& a);

   //
  //Assignment Operator Overload
  //
  //Purpose: allow direct assignment of array
  //Arguements: 
  //<a> : array to be copied
  //Preconditions: none
  //Return: *this
  
  ManagedArray& operator=(const ManagedArray& a);
  

  //
  // size
  //
  // Purpose: Return the current size of the array.
  // Argument(s): N/A
  // Return: current size of the array
  //
  
  unsigned size() const;

  //
  // read
  //
  // Purpose: Read array element at index i.
  // Argument(s):
  //  i : index of element to be read.
  // Precondition: i < size()
  // Return: Value of array element at index i.
  //

  ItemType read(unsigned i) const;

  //
  // write
  //
  // Purpose: Write x into array element at index i.
  // Argument(s):
  //  i : index of array element to be overwritten.
  //  x : value to be written into array.
  // Precondition: i < size()
  // Return: N/A.
  //

  void write(unsigned i, ItemType x);

  //
  // insert
  //
  // Purpose: Insert an element into the array.
  // Argument(s):
  //  i : index at which x is to be inserted
  //  x : value to be inserted into array.
  // Precondition: i <= size() && size() < MAX_LENGTH
  // Side Effect: The new element x will be inserted into the
  //              the array at index i.  Array elements will be 
  //              shifted to make room for x.  The array size 
  //              will be increased by one.
  // Return: N/A.
  //

  void insert(unsigned i, ItemType x);

  //
  // remove(i)
  //
  // Purpose: Remove an element from the array.
  // Argument(s):
  //   i : index of the element to be removed.
  // Precondition: i < size() && size() > 0
  // Side Effect: Remove the array element at index i.  Array 
  //              elements will be shifted to fill the "gap" left 
  //              by the removed element.  The array size will be 
  //              decreased by one.
  // Return: N/A.
  //

  void remove(unsigned i);

  //
  // Deconstructor
  //
  // Purpose: Deallocate memory for GuardedArray
  // Arguements: none
  // Preconditions: none
  // Side Effect: memory deallocated
  // Return: none

  ~ManagedArray();

private:

  unsigned aSize;
  GuardedArray array;

};

#endif