// |**********************************************************************;
// * Project           : CSS 115 Assignment 1
// *
// * Program name      : glyph.cpp
// *
// * Author            : Nolan Flegel
// *
// * SID               : 200250037
// *
// * Date created      : Oct 2, 2018
// *
// * 
// *
// |**********************************************************************;

#include <iostream>

#include "glyph.h"

using namespace std;



int main()
{

fileToArr();
transpose(glyphArray);
mirror(transArray);
rotate(mirrorArray);
render(rotateArray);

return 0;
}