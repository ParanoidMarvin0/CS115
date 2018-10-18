#include "Employee.h"

#include <iostream>
#include <iomanip>
using namespace std;

Employee readEmployee(){

  Employee e;
  
  cout << "Employee Name: ";
  getline(cin, e.name);
  cout << "Employee Id: ";
  cin >> e.id;
  cout << "Employee Yearly Salary: ";
  cin >> e.salary;

  return e;
}


void printEmployee(const Employee& employees){
  

  cout << endl;
  cout << "The Employee info is:" << employees.name << ", " << employees.id << ", " << employees.salary << endl;
  

}



int findEmployee(const Employee array[], int tId, int num){

int i;

 for (i = 0; i < num; i++)
{
  if (array[i].id == tId);
  {
    return i; 
  }
    return (-1);

}
}

