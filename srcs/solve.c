#include "computorV1.h"

float discriminant(int *terms) {
	return terms[1] * terms[1] - 4 * terms[2] * terms[0];
}

void zero_degree(int *terms) {
	if (terms[0] == 0) {
		printf("Statement true\n");
		return;
	}
	printf("statement false\n");
}

void first_degree(int *terms) {
	float x = 0;
	x = (-1.0 * terms[0]) / terms[1];
	printf("The solution is:\n");
	printf("%g\n", x);
}

void second_degree(float discriminant, int *terms) {
	float x1 = 0;
	float x2 = 0;

	if (discriminant < 0) {
		float real = -terms[1]/(2*terms[2]);
		float im = ft_sqrt(-discriminant)/(2*terms[2]);
		printf("Discriminant is strictly negative, the two solutions are:\n");
		printf("%g - %gi\n", real, im);
		printf("%g + %gi\n", real, im);
	}
	else if (discriminant == 0){
		printf("Discriminant is equal to zero, the two solutions is:\n");
		x1 = (-1.0 * terms[1]) / (2.0 * terms[2]);
		printf("%g\n", x1);
	}
	else if (discriminant > 0) {
		x1 = (-1.0 * terms[1] - sqrt(discriminant)) / (2.0 * terms[2]);
		x2 = (-1.0 * terms[1] + sqrt(discriminant)) / (2.0 * terms[2]);
		printf("%g\n", x1);
		printf("%g\n", x2);
	}
}

void third_degree() {
	printf("The polynomial degree is stricly greater than 2, can't easily be solved.\n");
}

void solve(int *terms, int degree) {
	if (degree == 0) {
		zero_degree(terms);
	}
	else if (degree == 1) {
		first_degree(terms);
	}
	else if (degree == 2) {
		second_degree(discriminant(terms), terms);
	}
	else if (degree >= 3) {
		third_degree();
	}
}
