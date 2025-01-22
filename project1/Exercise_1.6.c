// Exercise_1.6: verify that the expression getchar() != eof is 0 or 1.

#include <stdio.h>
#include "Header.h"

void Main1_6() {
	printf("------------------------------------------------------------------------------------\n");
	printf("Exercise_1.6: verify that the expression getchar() != eof is 0 or 1\n\n");
	int c;
	//The precedence of '!=' is higher than '='.
	while (c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d\nEnd of file reached", c); 
}