#include <cassert>
#include "guarded_array.h"

GuardedArray::GuardedArray() {
  // for (unsigned i = 0; i < arrayCap; i++)
  //   ptrArray[i] = 0;

  ptrArray = NULL;
  arrayCap = 0;

}

GuardedArray::GuardedArray(const int s){
  arrayCap=s;
  for (unsigned i = 0; i < arrayCap; i++)
    ptrArray[i] = 0;
}

GuardedArray::GuardedArray(const int s, ItemType x) {
  arrayCap=s;
  for (unsigned i = 0; i < arrayCap; i++)
    ptrArray[i] = x;
}

GuardedArray::GuardedArray(const GuardedArray& a){  //copy constructor

}

ItemType GuardedArray::read(unsigned i) const {
  assert(i < arrayCap);
  return ptrArray[i];
}

void GuardedArray::write(unsigned i, ItemType x) {
  assert(i < arrayCap);
  ptrArray[i] = x;
}

GuardedArray::~GuardedArray(){
  delete [] ptrArray;
}