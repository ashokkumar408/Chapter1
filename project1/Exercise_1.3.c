// Exercise_1.3: Modify the temparature conversion program to print a heading above the table.
#include <stdio.h>
#include "Header.h"

void Main1_3(){
	printf("Exercise 1.3: Fahrenheit to Celsius table\n\nFahrenheit                    Celsius\n");
	int fahr, celsius, lower = 0, upper = 300, step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d                             %3d\n", fahr, celsius);
		fahr = fahr + step;
	}
}
