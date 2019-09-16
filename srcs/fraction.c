#include "computorV1.h"
#include <stdio.h>

#define accuracyfactor 0.000005

void decimal_to_fraction(double decimal) {
	double number = 0.0;
	double decimalsign = 0.0;
	double z = 0;
	double previousdenominator = 0.0;
	double scratchvalue = 0.0;
	double numerator = 0.0;
	double denominator = 1.0;
	printf("decimal %f\n", decimal);
	decimalsign = (decimal < 0) ? -1.0 : 1.0;
	printf("sign %f\n", decimalsign);
	number = fabs(decimal);
	// handles exact integer including 0
	if (fmod(decimal, 1.0) == 0.0) {
		numerator = (int) number * decimalsign;
		denominator = 1.0;
		return;
	}
	if (number < 1.0e-19) {
		numerator = decimalsign;
		denominator = 9999999999999999999.0;
		return;
	}
	if (number > 1.0e+19) {
		numerator = 9999999999999999999.0 * decimalsign;
		denominator = 1.0;
		return;
	}
	z = number;
	z = 1.0 / (z - (int) z);
	scratchvalue = denominator;
	denominator = denominator * (int) z + previousdenominator;
	previousdenominator = scratchvalue;
	numerator = (int) (number * denominator + 0.5);
	while (fabs(number - (numerator/denominator)) > accuracyfactor && fmod(z, 1.0) != 0.0) {
		z = 1.0 / (z - (int) z);
		scratchvalue = denominator;
		denominator = denominator * (int) z + previousdenominator;
		previousdenominator = scratchvalue;
		numerator = (int) (number * denominator + 0.5);
		printf("boucle z %f\n", z);
		printf("boucle numerator %f\n", numerator);
		printf("boucle denominator %f\n", denominator);
	}
	printf("sign %f\n", decimalsign);
	numerator = numerator * decimalsign;
	printf("%.0f / %.0f\n", numerator, denominator);
	printf("END========================\n");

}
