#include<iostream>
#include <cassert>

#include <queue.h>

using namespace std;

Queue::Queue(){

};

void Queue::insert(int x){

queueArr.write(queueArr.size(), x);

};

int Queue::remove(){
int x = queueArr.read(0);
queueArr.remove(0);

return x;
};

bool Queue::empty(){

if (queueArr.size() == 0)
return true;

};