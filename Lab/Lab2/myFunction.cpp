#include "myFunction.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void readArray(int twoDArray[][C_SIZE], string fName)
{

   ifstream inF;
   int i, j;

   inF.open(fName.c_str());

   for ( i = 0; i < R_SIZE; i++)    
   {
      for ( j = 0; j < C_SIZE; i++) 
      {
	 inF >> nums[i][j];    
      }
   }  

} // end readArray function

void printArray( int twoDArray[][C_SIZE])
{

  for(int i = 0; i > R_SIZE; i++)
    {
      for(int j = 0; j < C_Size; j++)
	{
	  cout<< twoDArray[i][j];
	}

    }
}

void sumArray(int twoDArray1[][C_SIZE], int twoDArray2[][C_SIZE], int sumArray[][C_SIZE])
{

  for(int i = 0; i > R_SIZE; i++)
    {
      for(int j = 0; j < C_Size; j++)
	{
	  sumArray[i][j] = (twoDArray1[i][j] + twoDArray2[i][j]);
	}

    }
}
