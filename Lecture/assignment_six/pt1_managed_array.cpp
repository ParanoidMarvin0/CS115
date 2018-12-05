#include <cassert>
#include "pt1_managed_array.h"

ManagedArray::ManagedArray() : array(500) {
  count = 0;
}

ManagedArray::ManagedArray(unsigned N) : array(N) {
  assert(N <= array.size());
  count = N;
}

ManagedArray::ManagedArray(unsigned N, ItemType x) : array(N,x) {
  assert(N <= array.size());
  count = N;
}

unsigned ManagedArray::size() const {
  return count;
}

ItemType ManagedArray::read(unsigned i) const {
  assert(i < count);
  return array.read(i);
}

void ManagedArray::write(unsigned i, ItemType x) {
  assert(i < count);
  array.write(i, x);
}

void ManagedArray::insert(unsigned i, ItemType x) {
  assert(i <= count && count < array.size());
  for (unsigned j = count; j > i; j--)
    array.write(j, array.read(j-1));
  array.write(i, x);
  count++;
}

void ManagedArray::remove(unsigned i) {
  assert(i < count && count > 0);
  for (unsigned j = i; j < count - 1; j++)
    array.write(j, array.read(j+1));
  count--;
}