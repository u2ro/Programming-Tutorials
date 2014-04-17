// Done by TheTutor -- 10/20/01

/*	This tutorial is going to clear up the mystery of how to "include a .dll
	file".  You'll see another project with this tutorial named "PrintDLL".  This project
	was used to create "PrintDLL.dll" and "PrintDLL.lib" -- We also take from that 
	project "print.h" and we slightly modify it in this project (see header file)

	Now all we're doing with this program is including a function (whose implementation is
	contained in a .dll file) and calling it

*/

#include "print.h"

// Here we're including "PrintDLL.lib" -- We MUST include this .lib file to be able
// to use "PrintDLL.dll" -- This file was generated by the "PrintDLL" project
#pragma comment(lib,"PrintDLL.lib")


// Pretty simple main -- We're just calling our function which is 
// implemented with a .dll
int main()
{
	printMessage();
		return 0;
}

//	As usual, post your questions to www.GameTutorials.com

/*----------------------------*\
|  TheTutor                    |
|  thetutor@gametutorials.com  |
|  � 2000-2003 GameTutorials   |
\*----------------------------*/



