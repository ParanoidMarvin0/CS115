#include <cassert>
#include "pt2_managed_array.h"

ManagedArray::ManagedArray() : array(4) {
  aSize = 0;
}

ManagedArray::ManagedArray(unsigned N) : array(N) {
  assert(N <= array.size());
  aSize = N;
}

ManagedArray::ManagedArray(unsigned N, ItemType x) : array(N,x) {
  assert(N <= array.size());
  aSize = N;
}

// ManagedArray::ManagedArray(const ManagedArray& a) : array() {
// aSize=a.aSize;
// }

// ManagedArray& ManagedArray::operator=(const ManagedArray& a) {
// ManagedArray temp = a;
// temp.aSize = aSize;
// return *this;
// }
unsigned ManagedArray::size() const {
  return aSize;
}

ItemType ManagedArray::read(unsigned i) const {
  assert(i < aSize);
  return array.read(i);
}

void ManagedArray::write(unsigned i, ItemType x) {
  assert(i < aSize);
  array.write(i, x);
}

void ManagedArray::insert(unsigned i, ItemType x) {
  assert(i <= aSize);
  if (aSize >= array.size()){
    GuardedArray newArray(aSize+1);
    
  }
  
  for (unsigned j = aSize; j > i; j--)
    array.write(j, array.read(j-1));
  array.write(i, x);
  aSize++;
}

void ManagedArray::remove(unsigned i) {
  assert(i < aSize && aSize > 0);
  for (unsigned j = i; j < aSize - 1; j++)
    array.write(j, array.read(j+1));
  aSize--;
}

ManagedArray::~ManagedArray() { }
