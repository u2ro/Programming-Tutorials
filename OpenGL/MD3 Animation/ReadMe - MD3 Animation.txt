//***********************************************************************
//											
//	- "Talk to me like I'm a 3 year old!" Programming Lessons -		 
//                                                                       
//	$Author:		DigiBen		digiben@gametutorials.com	
//											
//	$Program:		MD3 Animation
//
//	$Description:	Demonstrates how to animate Quake3 characters with quaternions
//
//	$Date:		3/28/02							
//											
//***********************************************************************

Files:  	Main.cpp (The Source File containing the main program code)
	Init.cpp (The Source File containing the Win32 and OpenGL initialization code)
	Md3.cpp (The Source File containing the MD3 model code)
	Md3.h (The Header File containing the MD3 model definitions)
	Main.h (The Header File containing definitions for the main program)
	Camera3.vcproj  (The VC++ Project File holding the project info)
	Camera3.sln  (The Solution File holding the solution info)
	lara Folder (The Directory holding all the MD3 model/texture files)

Libraries:		opengl32.lib (The OpenGL Interface Library needed to compile the program)
		glu32.lib (The OpenGL Utility Library needed to compile the program)
		glaux.lib (The OpenGL Auxiliary Library needed to compile the program)

Instructions:	If you have Microsoft Visual Studio .NET (version 7.0) just click on the
		<Program Name>.vcproj file.  This will open up visual c++.  You will most
		likely see the code for <Program Name>.cpp.  If you don't, press CRTL+ALT+L
		This will open the "Solution Explorer".  There you should find two folders named
		"Source Files" and "Header Files".  Double click on the "source" folder and you
		should see your source file(s) with a .cpp extension after it.  Double click on the
		file and it will open up in your main window.  Hit Control-F5 to run the program.
		You will probably see a prompt to compile/build the project.  Click OK and
		the Win32 program should pop up. :)

EULA:  	Your use of this tutorial constitutes your agreement to GameTutorials' Terms of Use found
	at:  http://www.gametutorials.com/TermsOfUse.htm

www.GameTutorials.com
�2000-2003 GameTutorials