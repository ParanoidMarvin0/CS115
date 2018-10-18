#include <iostream>
#include <iomanip>
using namespace std;
#include "Employee.h"

int main()
{
     Employee employees[NUM_EMPL];
     int tempId;
     int index;

     cout << fixed << showpoint << setprecision(2);

     for (int i = 0; i < NUM_EMPL; i++)
     {
          employees[i] = readEmployee();
	  cin.ignore(256,'\n');
     }
     cout << endl;
     for (int i = 0; i < NUM_EMPL; i++)
     {
          printEmployee(employees[i]);
     }

     //----Add code below for Step2----
     //prompt the user for an id
   
     //call the findEmployee function
     
       cout << "Enter an id to look for: ";
       cin >> tempId;
       index = findEmployee(employees, tempId, NUM_EMPL);

       if (index != -1)
	 {
	   cout << "Employee found: " << employees[index].name << endl;
	 }
       else
	 cout << "Employee not found!" << endl;

     //if found, display the name of the employee that goes with the id
}
