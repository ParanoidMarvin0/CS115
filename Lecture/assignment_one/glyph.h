// glyph.h
//
// This module provides manipulation and render tools for glyphs.
// Static constants for glyph array size and global array declarations
// are defined below

#ifndef GLYPH_H
#define GLYPH_H



static const int glyArrCol = 10;
static const int glyArrRow = 10;
static const int pxlArrSize = 10;
extern int glyphArray[glyArrRow][glyArrCol];
extern int transArray[glyArrRow][glyArrCol];
extern int mirrorArray[glyArrRow][glyArrCol];
extern int rotateArray[glyArrRow][glyArrCol];


//fileToArr
//
//Purpose: input decimal matrix from text file
//Parameters: None
//Preconditions: text file named example.glyph contains maxtrix of pixels 
//Returns: None
//Side Effects: file stored as glyphArray
//

void fileToArr();

//render
//
//Purpose: Convert matrix of pixels from decimal to character representation
//Parameters: renderArray: an array containing a matrix of decimals
//Preconditions: none 
//Returns: none
//Side Effects: output to screen converted pixel array 
//
void render(int Array[glyArrRow][glyArrCol]);


//mirror
//
//Purpose: Mirror array along vertical axis
//Parameters: Array: an array containing a matrix of decimals
//Preconditions: none 
//Returns: none
//Side Effects:Array is mirrored and decimal values changed to adjust pixel output
//
void mirror(int Array[glyArrRow][glyArrCol]);

//transpose
//
//Purpose: transpose matrix
//Parameters: Array: an array containing a matrix of decimals
//Preconditions: none 
//Returns: none
//Side Effects: Array is transposed and decimal values changed to adjust pixel output
//
void transpose(int Array[glyArrRow][glyArrCol]);


//rotate
//
//Purpose: rotate matrix from top to bottom 
//Parameters: Array: an array containing a matrix of decimals
//Preconditions: none 
//Returns: none
//Side Effects: Array is rotated by one row.
//
void rotate(int Array[glyArrRow][glyArrCol]);

#endif
