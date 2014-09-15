#include <stdio.h>

struct  Pixel
{
	/* data */
	float X;
	float Y;
};

typedef struct Pixel Pixel; // help C compiler find type

typedef unsigned char byte;

typedef struct  // another alternative for solving the struct namespace issue
{
	/* data */
	byte Red;
	byte Green;
	byte Blue;
} Color;

typedef struct 
{
	/* data */
	short first; // xx__
	int second; // xxxx
	short third; // xx__
} Layout;

typedef struct 
{
	/* data */
	int second;	// xxxx
	short first; // xx
	short third; // xx
} Layout2;

int main()
{
	Pixel p = {10.0f, 20.0f};
	Color c = {255, 128};

	float x = p.X;
	c.Blue = 255;
	printf("short %d\n", (int) sizeof(short));
	printf("int %d\n", (int) sizeof(int));
	// to demonstrate layout and padding and memory alignment
	printf("struct %d\n", (int) sizeof(Layout));
	printf("struct %d\n", (int) sizeof(Layout2));

}