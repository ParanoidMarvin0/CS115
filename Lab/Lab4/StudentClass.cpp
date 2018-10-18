//---------------------------------------------
// This would be the Student.h file
//---------------------------------------------
#include <iostream>
#include <cassert>
using namespace std;

class Student
{
    private:
      string name;
      int id;
      int mark[3];
    public:
      Student();
      Student(string aName, int anId, int mark1, int mark2, int mark3);
      void setName(string aName);
      void setId(int anId);
      void setMark (int mark1, int mark2, int mark3);
      string getName() const;
      int getId() const;
      int getMark(int i) const;
      void printAll() const;
};
//---------------------------------------------
// This would be the Student.cpp file
//---------------------------------------------
Student::Student() //default constructor
{
      name = "";
      id = 0;
      mark[0] = 0;
      mark[1] = 0;
      mark[2] = 0;
}
Student::Student(string aName, int anId, int mark1, int mark2, int mark3)
//other constructor
{
      assert (anId >= 100000000 && anId< 1000000000);
      name = aName;
      id = anId;
      mark[0] = mark1;
      mark[1] = mark2;
      mark[2] = mark3;
 }
 
void Student::setName(string aName)
{
      name = aName;
}
void Student::setId(int anId)
{
      assert (anId >= 100000000 && anId< 1000000000);

      id = anId;
}
void Student::setMark (int mark1, int mark2, int mark3)
{
      mark[0] = mark1;
      mark[1] = mark2;
      mark[2] = mark3;
}
 
string Student::getName() const
{
      return name;
}
int Student::getId() const
{
      return id;
}
void Student::printAll() const 
{
      cout << "Hello, " << name << endl; 
      cout << "Your Student ID is " << id << endl;
      cout << "Your marks are: " << endl;
      for (int i=0; i < 3; i++) 
      {
         cout << "Test " << i+1 << ": " << mark[i] << " " << endl;
      }
}
int Student::getMark(int i) const
{
   if (i <=2 && i>=0)
   {
      return mark[i];
   }
   else
   {
      return -1;
   }
}

//---------------------------------------------
// This would be the main.cpp file
//---------------------------------------------
int main ()
{
   Student stu;  //calls default constructor
   string inName;
   int inId;
   int i;


   cout << "********************************"<<endl;
   cout << "View stu after default constructor" << endl;
   stu.printAll();
   cout << endl;

   //Use setters to reset the values
   cout << "Your name, please: ";
   getline(cin, inName, '\n');   // input a string
   stu.setName (inName);
   cout << "Your id, please: ";
   cin >> inId;
   stu.setId (inId);
   stu.setMark (89,92,68);

   cout << endl;
   cout << "********************************"<<endl;
   cout << "View stu after setters" << endl;
   stu.printAll();
 
   cout << endl;
   cout << "********************************"<<endl;
   cout << "Testing other constructor" << endl;

   Student tom ("Tom", 99, 55, 32, 68);  //calls second constructor
   //notice using getters to print
   cout << "Hello, " << tom.getName() << endl; 
   cout << "Your Student ID is " << tom.getId() << endl;
   cout << "Your marks are: " << endl;
   for (int i=0; i < 3; i++) 
   {
      cout << "Test " << i+1 << ": " << tom.getMark(i) << " " << endl;
   }
}
