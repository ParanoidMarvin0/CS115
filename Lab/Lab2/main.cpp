#include "myFunction.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
  int twoDArray1[R_SIZE][C_SIZE], twoDArray2[R_SIZE][C_SIZE], twoDArray3[R_SIZE][C_SIZE];

  string fileName1, fileName2;
  
  cout << "Please enter the name of the file containing data for Array 1: ";
  cin >> fileName1;
  readArray(twoDArray1, fileName1);

  cout << "Please enter the name of the file containing data for Array 2: ";
  cin >> fineName2;
  readArray(twoDArray2, fileName2);

  sumArray(twoDArray1, twoDArray2, twoDArray3);

  cout << "The sum is: " << endl;

  printArray(twoDArray3);
  

  return(0);  
}
