#include <stdio.h>

main() {
	printf("Fahrenheit:    celsius:\n");
	float fahr, celsius;
	for (fahr = 300.0f; fahr >= 0; fahr = fahr - 20.0f) {
		celsius = (0.556f) * (fahr - 32.0f);
		printf(" %.0f		 %6.1f\n", fahr, celsius);
	}
}