#include<stdio.h>

int main()
{
	float celsius, fahrenheit, kelvin;

	celsius = 21;
	fahrenheit = celsius * 9/5 + 32;
	kelvin = celsius + 273.15f;

	printf("%.2fC = %.2fF = %.2fK\n",celsius, fahrenheit, kelvin);

	return 0;
}