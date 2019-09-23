/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:31:48 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:30:24 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorV1.h"
#include <complex.h>

//What if d = 0?
void	third_degree(int *terms)
{
	double a = (double)terms[3];
	double b = (double)terms[2];
	double c = (double)terms[1];
	double d = (double)terms[0];
	double x = 0;
	double x1 = 0;
	double x2 = 0;
	double x3 = 0;
	double x2_im = 0;
	double x3_im = 0;
	double s = 0;
	double u = 0;
	double f = ((3.0 * c / a) - ((b * b) / (a * a))) / 3.0;
	double g = (((2.0 * (b * b * b)) / (a * a * a)) - ((9.0 * b * c) / (a * a)) + (27.0 * d / a)) / 27.0;
	double h = ((g * g) / 4.0 + (f * f * f) / 27.0);

	if (f == 0 && g == 0 & h == 0)
	{ // All roots are real and equal
		if (d / a >= 0)
			x = pow((d / (1.0 * a)), 1 / 3.0) * -1;
		else
			x = pow((d / (1.0 * a)), 1 / 3.0);
		printf("%g\n", x);
	}
	else if (h <= 0)
	{ // All 3 roots are real
		double i = sqrt((g * g / 4.0) - h);
		double j = pow(i, 1 / 3.0);
		double k = acos(-(g / (2 * i)));
		double l = j * -1;
		double m = cos(k / 3.0);
		double n = sqrt(3) * sin(k / 3.0);
		double p = (b / (3.0 * a)) * -1;

		x1 = 2 * j * cos(k / 3.0) - (b / (3.0 * a));
		x2 = l * (m + n) + p;
		x3 = l * (m - n) + p;
		printf("x1 = %g x2 = %g x3 = %g\n", x1, x2, x3);
	}
	else if (h > 0)
	{ // One real roots and two complex roots
		double r = -(g / 2.0) + sqrt(h);
		if (r >= 0)
			s = pow(r, 1 / 3.0);
		else
			s = pow((-r), 1 / 3.0) * -1;
		double t = -(g / 2.0) - sqrt(h);
		if (t >= 0)
			u = pow(t, 1 / 3.0);
		else
			u = pow(t, 1 / 3.0) * -1;
		x1 = (s + u) - (b / (3.0 * a));
		x2 = -(s + u) / 2 - (b / (3.0 * a));
		x2_im = (s - u) * sqrt(3) * 0.5;
		x3 = -(s + u) / 2 - (b / (3.0 * a));
		x3_im = -(s - u) * sqrt(3) * 0.5;
		printf("x1 = %g x2 = %g + %gi x3 = %g + %gi\n", x1, x2, x2_im, x3, x3_im);
	}
}
