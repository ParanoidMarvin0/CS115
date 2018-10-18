#include <iostream>
using namespace std;

struct Student
{
    string name;
    int id;
    int mark[3];
};

int main ()
{
    Student stu;
    int i;

    cout << "Your name, please: ";
    getline(cin, stu.name);   // command to input a string
    cout << "Your id is: ";
    cin >> stu.id;
    cout << "Enter your marks for three tests." << endl;
    for (i = 0; i < 3; i++) 
    {
        cout << "Test " << i+1 << ": ";
        cin >> stu.mark[i]; 
    }
  
    cout << endl;
    cout << "Hello, " << stu.name << endl; 
    cout << "Your Student ID is " << stu.id << endl;
    cout << "Your marks are: " << endl;
    for (i = 0; i < 3; i++) 
    {
      cout << "Test " << i+1 << ": " << stu.mark[i] << " " << endl;
    }

    return 0;
}
