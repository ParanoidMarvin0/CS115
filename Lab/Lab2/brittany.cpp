
#include <iostream>
#include <fstream>
using namespace std;

const unsigned int R_SIZE = 4;
const unsigned int C_SIZE = 5;

void readArray( int twoDArray[][C_SIZE], string fName );  // function prototype

int main()
{
   int i, j;
   int nums[C_SIZE][R_SIZE];
   string filename;
   cout << "Please enter the name of the file containing data for Array 1: ";
   cin >> filename;
     
   readArray(nums[][],filename);
   for ( i = 0; i < C_SIZE; i++)    
   {
      for ( j = 0; j < R_SIZE; j++) 
      {
	 cout << nums[i][j] << " ";    
      }
      cout << endl;
   }  



}

// Function:  readArray
// Purpose:   To read values into an array.
// Parameters: Base address of an array.
// Returns:   void
// --------------------------------------------------------
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
