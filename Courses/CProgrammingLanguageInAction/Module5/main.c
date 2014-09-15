#include <stdio.h>

void run()
{
	static int hens = 5;
	int eggs = 5;

	hens = hens + 1;
	eggs = eggs + 1;

	printf("%d %d\n",hens, eggs);

}

// overwrites the stack frame
void trample()
{
	int a = 123;
	int b = 123;
}

int main()
{
	run();
	trample();
	run();
	trample();
	run();
}