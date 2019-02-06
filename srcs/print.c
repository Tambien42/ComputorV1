#include "computorV1.h"

void print_equation(int *terms, int length) {
	int i = 0;

	while (i <= length){
		if (terms[i] != 0) {
			if (terms[i] < 0) {
				if (i == 0) {
					printf("-");
				} else {
					printf(" - ");
				}
				printf("%d", -1 * terms[i]);
			}
			else {
				if (i != 0) {
					printf(" + ");
				}
				printf("%d", terms[i]);
			}
			if (i >= 1) {
				printf("*X");
				if (i > 1) {
					printf("^%d", i);
				}
			}
		}
		else if (terms[i] == 0) {
			i++;
			continue;
		}
		i++;
	}
	printf(" = 0\n");
}
