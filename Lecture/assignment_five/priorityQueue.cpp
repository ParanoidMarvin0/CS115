#include<iostream>
#include <cassert>

#include "priorityQueue.h"

using namespace std;

priorityQueue::priorityQueue(){

};

void priorityQueue::insert(int x){
if (pQArr.size()==0)
{
    pQArr.insert(pQArr.size(), x);
}
else{
for (unsigned int i = 0; i < pQArr.size(); i++)
if (pQArr.read(i) >= x)
{pQArr.insert(i, x);
break;
}
else{pQArr.insert(pQArr.size(),x);}

}
};

int priorityQueue::remove(){
int x = pQArr.read(0);
pQArr.remove(0);

return x;
};

bool priorityQueue::empty() const{

if (pQArr.size() == 0)
return true;

};

