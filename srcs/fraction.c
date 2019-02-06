#include "computorV1.h"
#include <stdio.h>

#define PRECISION 1e-6

int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;

    if (a > b)
        return gcd(b, a % b);
    else
        return gcd(a, b % a);
}

Fraction dec2frac(double input) {
	float signOfInput = (input >= 0.0)? 1.0 : -1.0;
	input = input * signOfInput; // Make input positive.

	double z[2] = { 0, input }; // { zLast, zNow }
	int d[2] = { 0, 1 }; // { dLast, dNow }
	int n = 0;

	while ((fabs(z[1] - roundf(z[1])) > PRECISION && fabs(z[0] - z[1]) > PRECISION)) {
		double fracPart = (z[1] - floorf(z[1]));
		z[0] = z[1];
		z[1] = 1.0/fracPart;
		int intPart = floorf(z[1]);
		int oldD = d[1];
		d[1] = (d[1] * intPart) + d[0];
		d[0] = oldD;
		n = roundf(input * d[1]);
	}

	int theGCD = gcd(n, d[1]);
	n = n/theGCD;
	d[1] = d[1]/theGCD;

	Fraction result;
	result.numerator = signOfInput * n;
	result.denominator = d[1];

	return result;
}
