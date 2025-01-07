//Exercise_1.4: Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

main(){
	printf("celsius value is: \t\t Fahrenheit value is:\n");
	int fahr, lower = 0, upper = 300, step = 20, celsius = lower;
	while (celsius <= upper) {
		fahr = 32 + (celsius * (9 / 5));
		printf("%3d                       %d\n", celsius, fahr);
		celsius = celsius + step;
	}
}