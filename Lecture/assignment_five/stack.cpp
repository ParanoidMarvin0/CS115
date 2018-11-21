#include<iostream>
#include <cassert>

#include "stack.h"

using namespace std;

Stack::Stack(){

};

void Stack::insert(int x){

stackArr.insert(stackArr.size(), x);

};

int Stack::remove(){
int x = stackArr.read(stackArr.size()-1);
stackArr.remove(stackArr.size()-1);

return x;
};

bool Stack::empty() const{

if (stackArr.size() == 0)
return true;

};