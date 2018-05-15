//contains headers for area.c

#ifndef AREA_H //this macro tells the coompiler not to include area.h if it has already been included by the compiler
#define AREA_H//if it has not been included we are asking to define this name and within that declaring the function prototypes
//below are the two function declarations contained in area.c
	double	getcirclearea(double);
	double	gettrianglearea(double, double);

#endif

//#ifndef checks whether the given token has been #defined earlier in the file or in an included file; if not, it includes the code between it and the closing #endif statement.
