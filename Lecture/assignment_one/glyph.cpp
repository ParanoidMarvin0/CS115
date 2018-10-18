

#include <iostream>
#include <fstream>

#include "glyph.h"

using namespace std;

//pixelValues represents glyph art characters for render function
char pixelValues[] = {'.', 'o', 'O', '*', '#', '+', '/', '\\', '-', '|'};

//initialized arrays for corresponding functions
int transArray[glyArrRow][glyArrCol];
int glyphArray[glyArrRow][glyArrCol];
int mirrorArray[glyArrRow][glyArrCol];
int rotateArray[glyArrRow][glyArrCol];

void fileToArr()
{
	ifstream glyphData;
	glyphData.open("example.glyph");
		if (!glyphData)
		{
			cout << "File Not Opened!";
		}


	for (int i = 0; i < glyArrRow; ++i) 
		{
		for (int j = 0; j < glyArrCol; ++j) 
		{
			glyphData >> glyphArray[i][j];
		}
	}
	
}


void render(int renderArray[glyArrRow][glyArrCol])
{
	
	for (int i = 0; i < glyArrRow; i++)
	{
		for (int j = 0; j < glyArrCol; j++)
		{
			for(int k = 0; k < pxlArrSize; k++)
			{
				if (renderArray[i][j] == k)
					cout << pixelValues[k];
			}
			
		}
		cout << endl;
	}

cout << endl << endl;
}

void transpose(int tmpTrArr[glyArrRow][glyArrCol])
{

	for (int i = 0; i < glyArrRow; i++)
		{
			for (int j = 0; j < glyArrCol; j++)
			{
				if (tmpTrArr[j][i] == 8)
				{
					transArray[i][j] = 9;
				}
				else if (tmpTrArr[j][i] == 9)
				{
					transArray[i][j] = 8;
				}
				else{				
				transArray[i][j] = tmpTrArr[j][i];
				}		
			}
		}
	
}

void mirror(int tmpMiArr[glyArrRow][glyArrCol])
{
	int trueLen = glyArrCol-1;
	for (int i = 0; i < glyArrRow; i++)
		{
			for (int j = 0; j < glyArrCol; j++)
			{
				if (tmpMiArr[i][trueLen-j] == 6)
				{
					mirrorArray[i][j] = 7;
				}
				else if (tmpMiArr[i][trueLen-j] == 7)
				{
					mirrorArray[i][j] = 6;
				}
				else
				{
				mirrorArray[i][j] = tmpMiArr[i][trueLen-j];
				}
			}

		}
}

void rotate(int tmpRoArr[glyArrRow][glyArrCol])
{
	int trueHeight = glyArrRow - 1;
	for (int i = 0; i < glyArrRow; i++)
	{
		for (int j = 0; j < glyArrCol; j++)
		{
			if (i == 0)
			{
				rotateArray[trueHeight - i][j] = tmpRoArr[i][j];
			}
			else{
			rotateArray[i-1][j] = tmpRoArr[i][j];
		}
		}
	}
}