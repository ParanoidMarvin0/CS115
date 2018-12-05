#include<iostream>
#include <cassert>

#include "queue.h"

using namespace std;

Queue::Queue(){

};

void Queue::insert(int x){

queueArr.insert(queueArr.size(), x);

};

int Queue::remove(){
int x = queueArr.read(0);
queueArr.remove(0);

return x;
};

bool Queue::empty() const{

if (queueArr.size() == 0)
return true;

};