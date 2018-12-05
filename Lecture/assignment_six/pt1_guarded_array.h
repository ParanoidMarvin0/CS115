#ifndef __PT1_GUARDED_ARRAY_H__
#define __PT1_GUARDED_ARRAY_H__

typedef int ItemType;



//
// GuardedArray
// - A wrapper class for C++ arrays to make array access safe.
//   Specifically, initialization is guaranteed, and assertions are
//   in place to detect array index out of bound errors in array member
//   accesses.
//

class GuardedArray {
public:
  //
  // Constructor
  //
  // Purpose: Initializes guardedarray ptr to null and array size to zero
  // Argument(s): N/A
  // Side Effect: pointer set to null, array size to zero
  // Return: N/A
  //

  GuardedArray();

  //
  // Constructor
  //
  // Purpose: Initializes all array elements to 0, allocates array size to given int.
  // Argument(s):
  //  s : value to which array size should be initialized.
  // Side Effect: All array elements are initialized to 0 to given size x.
  // Return: N/A
  //

  GuardedArray(const int s);

  //
  // Constructor
  //
  // Purpose: Initializes all array elements to a given value at a given array size.
  // Argument(s):
  //  x : value to which array elements should be initialized.
  //  s : value for array size
  // Side Effect: All array elements are initialized to x.
  // Return: N/A
  //

  GuardedArray(const int s, ItemType x);

  //
  //Copy Constructor
  //
  // Purpose: initialize instance using another instance
  // Argument(s):
  //  a : an instance of guardedarray that will be copied to new array
  // Side Effect: new instance initialized with all elements equal to passed instance.
  // Return: N/A
  //

  GuardedArray(const GuardedArray& a);

  //
  //Assignment Operator Overload
  //
  //Purpose: allow direct assignment of array
  //Arguements: 
  //<a> : array to be copied
  //Preconditions: none
  //Return: *this
  
  GuardedArray& GuardedArray::operator=(const GuardedArray& a);
  
  
  //
  // read
  //
  // Purpose: Read array element at index i.
  // Argument(s):
  //  i : index of element to be read.
  // Precondition(s): i < MAX_LENGTH
  // Return: Value of array element at index i
  // 

  ItemType read(unsigned i) const;

  //
  // write
  //
  // Purpose: Write x into array element at index i.
  // Argument(s):
  //  i : index of array element to be overwritten.
  //  x : value to be stored into array.
  // Precondition(s): i < MAX_LENGTH.
  // Side Effect: The array element at index i will be 
  //              overwritten by x.
  // Return: N/A
  //

  void write(unsigned i, ItemType x);

  //
  // Deconstructor
  //
  // Purpose: Deallocate memory for GuardedArray
  // Arguements: none
  // Preconditions: none
  // Side Effect: memory deallocated
  // Return: none

  ~GuardedArray(); 



private:
unsigned arrayCap;
int *ptrArray;

//ItemType array[arrayCap];

};

#endif