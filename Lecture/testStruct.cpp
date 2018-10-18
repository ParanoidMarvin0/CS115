#include <iostream>
#include <string>

using namespace std;

struct test {

string name;
int rank;

};


int main()
{

    test structArray[5];
    structArray[0].name = "value1";
    structArray[1].name = "value2";
    structArray[2].name = "value3";

    for (int i=0; i < 3; i++)
    {
        std::cout << structArray[i].name << endl;
    }

    return 0;
}