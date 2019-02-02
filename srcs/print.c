#include "computorV1.h"

// <TODO>if all element = 0 print 0 = 0</TODO>
void print_equation(int *terms) {
	int i = 0;

	while (terms[i]) {
		if (i == 0) {
			if (terms[i] < 0) {
				printf("- ");
				printf("%d ", -1 * terms[i]);
			}
			else
				printf("%d ", terms[i]);
			if (terms[i+1] && terms[i+1] >= 0) {
				printf("+ ");
			}
		} else if (i == 1) {
			if (terms[i] < 0) {
				printf("- ");
				printf("%d*X ", -1 * terms[i]);
			}
			else
				printf("%d*X ", terms[i]);
			if (terms[i+1] && terms[i+1] >= 0) {
				printf("+ ");
			}
		} else {
			if (terms[i] < 0) {
				printf("- ");
				printf("%d*X^%d ", -1 * terms[i], i);
			}
			else
				printf("%d*X^%d ", terms[i], i);
			if (terms[i+1] && terms[i+1] >= 0) {
				printf("+ ");
			}
		}
		i++;
	}
	printf("= 0\n");
}
