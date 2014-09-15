// discusses various types within c

#include <stdio.h>

typedef unsigned char byte;

int main()
{
	int i = 123;
	float f = 1.23f;
	double d = 2.34;
	char c= 'c';

	unsigned int ui = 123u;	// alternatively could be just unsigned ui = 
	short int si = 123;	// alternatively could be just short si = 
	long int li = 123; // alternatively could be just long li = 

	byte b = 0X12;

	printf("%d (%d)\n",i, (int) sizeof(int));

}