//Exercise_1.4: Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>
#include "Header.h"

void Main1_4(){
	printf("------------------------------------------------------------------------------------\n");
	printf("Exercise 1.4: Celsius to Fahrenheit table\n\nCelsius                    Fahrenheit\n");
	int fahr, lower = 0, upper = 300, step = 20, celsius = lower;
	while (celsius <= upper) {
		fahr = 32 + (celsius * (9 / 5));
		printf("%3d                       %d\n", celsius, fahr);
		celsius = celsius + step;
	}
}