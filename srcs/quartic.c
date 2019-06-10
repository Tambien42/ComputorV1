#include "computorV1.h"

void fourth_degree(int *terms) {
	double a = (double)terms[4];
	double b = (double)terms[3];
	double c = (double)terms[2];
	double d = (double)terms[1];
	double e = (double)terms[0];

	double delta = 256 * a * a * a * e * e *e
					- 192 * a * a * b * d * e * e
					- 128 * a * a * c * c * e * e
					+ 144 * a * a * c * d * d * e
					- 27 * a * a * d * d * d * d
					+ 144 * a * b * b * c * e * e
					- 6 * a * b * b * d * d * e
					- 80 * a * b * c * c * d * e
					+ 18 * a * b * c * d * d * d
					+ 16 * a * c * c * c * c * e
					- 4 * a * c * c * c * d * d
					- 27 * b * b * b * b * e * e
					+ 18 * b * b * b * c * d * e
					- 4 * b * b * b * d * d * d
					- 4 * b * b * c * c * c * e
					+ b * b * c * c * d * d;

	double p = 8 * a * c - 3 * b * b;
	double r = b * b * b + 8 * d * a * a - 4 * a * b * c;
	double delta0 = c * c - 3 * b * d + 12 * a * e;
	double d_maj = 64 * a * a * a * e - 16 * a * a * c * c + 16 * a * b * b * c - 16 * a * a * b * d - 3 * b * b * b * b;

	if (delta < 0) { // Two distinct real roots
		printf("Two distinct real roots\n");
	}
	else if (delta > 0) {
		if (p < 0 && d_maj < 0) { // All four roots are real and distinct
			printf("All four roots are real and distinct\n");
		}
		else if (p > 0 && d_maj > 0) { // Two pairs of non-real complex conjugate roots
			printf("Two pairs of non-real complex conjugate roots\n");
		}
	}
	else {
		if (p < 0 && d_maj < 0 && delta0 != 0) { // A real double root and two real simple roots
			printf("A real double root and two real simple roots\n");
		}
		else if (d_maj > 0 || (p > 0 && (d_maj != 0 || r != 0))) { // A real double root and two complex conjugate roots
			printf("A real double root and two complex conjugate roots\n");
		}
		else if (delta0 == 0 && d_maj != 0) { // A triple root and a simple root, all real
			printf("A triple root and a simple root, all real\n");
		}
		else if (d_maj == 0) {
			if (p < 0) { // Two real double roots
				printf("Two real double roots\n");
			}
			if (p > 0 && r == 0) { // Two complex conjugate double roots
				printf("Two complex conjugate double roots\n");
			}
			if (delta0 == 0) { // all four roots are real and equal
				double x = - b / (4.0 * a);
				printf("x1 = x2 = x3 = x4 = %g\n", x);
			}
		}
	}
}
