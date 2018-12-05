#include <cassert>
#include "pt2_guarded_array.h"

GuardedArray::GuardedArray() {
  // for (unsigned i = 0; i < arrayCap; i++)
  //   ptrArray[i] = 0;

  ptrArray = nullptr;
  arrayCap = 0;

}

GuardedArray::GuardedArray(const int s){
  arrayCap=s;
  ptrArray = new int[arrayCap];
  
for (unsigned i = 0; i < arrayCap; i++)
    ptrArray[i] = 0;
}

GuardedArray::GuardedArray(const int s, ItemType x) {
  arrayCap=s;
  ptrArray = new int[arrayCap];
  for (unsigned i = 0; i < arrayCap; i++)
    ptrArray[i] = x;
}

GuardedArray::GuardedArray(const GuardedArray& a){  //copy constructor
  arrayCap = a.arrayCap;
  ptrArray = a.ptrArray;

}
GuardedArray& GuardedArray::operator=(const GuardedArray& a)
{
 arrayCap = a.arrayCap;
 int* cpyArray = new int[arrayCap];
 GuardedArray temp(a);
 cpyArray = temp.ptrArray;
 delete [] ptrArray;
 ptrArray = cpyArray;
 return *this;
}

ItemType GuardedArray::read(unsigned i) const {
  assert(i < arrayCap);
  return ptrArray[i];
}

void GuardedArray::write(unsigned i, ItemType x) {
  assert(i < arrayCap);
  ptrArray[i] = x;
}

int GuardedArray::size(){
  return arrayCap;
}

GuardedArray::~GuardedArray(){
  delete [] ptrArray;
}