// start of main.c
#include "multiply.h"

#define LEVEL 2

int main()
{
	multiply(4,5) /* and then */ multiply(6,7);
	#if LEVEL > 0
	SQUARE(9);
	#endif
}

// end of main.c