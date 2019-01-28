#include "computorV1.h"

// <TODO>if all element = 0 print 0 = 0</TODO>
void print_equation(int *terms) {
	int i = 0;

	while (terms[i]) {
		printf("%d*X^%d", terms[i], i);
		if (terms[i+1] && terms[i+1] >= 0) {
			printf("+");
		}
		i++;
	}
	printf(" = 0\n");
}
