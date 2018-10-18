	/****************************************************
*
	*  FileName:	~ftp/pub/class/170/ftp/cpp/hello.cpp
	*  Author:	Ada Lovelace
*  Purpose:
   *		Demonstrate simple I/O by inputting a
   *		name and outputting a welcome message.
*
********************************************************/

#include <iostream>

using namespace std;

int main() 
{  
string user_name;

           cout << "Welcome to the world of C++" << endl;
		cout << "What is your name? ";
			    cin >> user_name;
cout << endl;
cout << "Hi " + user_name + "! Welcome to CS115." << endl;

} // end main
