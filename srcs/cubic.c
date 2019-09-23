/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cubic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:31:48 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 17:16:55 by /usr/bin/whoami  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"
#include <complex.h>

typedef struct s_cubic
{
	double a;
	double b;
	double c;
	double d;
	double x;
	double x1;
	double x2;
	double x3;
	double x2_im;
	double x3_im;
	double s;
	double u;
	double f;
	double g;
	double h;
	double i;
	double j;
	double k;
	double l;
	double m;
	double n;
	double p;
	double r;
	double t;
} t_cubic;

void initialize(t_cubic cubic, int *terms)
{
	cubic.a = = (double)terms[3];
	cubic.b = = (double)terms[2];
	cubic.c = = (double)terms[1];
	cubic.d = = (double)terms[0];
	cubic.x = 0;
	cubic.x1 = 0;
	cubic.x2 = 0;
	cubic.x3 = 0;
	cubic.x2_im = 0;
	cubic.x3_im = 0;
	cubic.s = 0;
	cubic.u = 0;
	cubic.f = ((3.0 * c / a) - ((b * b) / (a * a))) / 3.0;
	cubic.g = (((2.0 * (b * b * b)) / (a * a * a)) - ((9.0 * b * c) / (a * a)) + (27.0 * d / a)) / 27.0;
	cubic.h = ((g * g) / 4.0 + (f * f * f) / 27.0);;
	cubic.i = 0;
	cubic.j = 0;
	cubic.k = 0;
	cubic.l = 0;
	cubic.m = 0;
	cubic.n = 0;
	cubic.p = 0;
	cubic.r = 0;
	cubic.t = 0;
}
//What if d = 0?
void	third_degree(int *terms)
{
	t_cubic cubic;
	initialize(cubic, terms);

	if (cubic.f == 0 && cubic.g == 0 & cubic.h == 0)
	{ // All roots are real and equal
		if (cubic.d / cubic.a >= 0)
			cubic.x = pow((cubic.d / (1.0 * cubic.a)), 1 / 3.0) * -1;
		else
			cubic.x = pow((d / (1.0 * a)), 1 / 3.0);
		printf("%g\n", cubic.x);
	}
	else if (h <= 0)
	{ // All 3 roots are real
		cubic.i = sqrt((cubic.g * cubic.g / 4.0) - cubic.h);
		cubic.j = pow(cubic.i, 1 / 3.0);
		cubic.k = acos(-(cubic.g / (2 * cubic.i)));
		cubic.l = j * -1;
		cubic.m = cos(cubic.k / 3.0);
		cubic.n = sqrt(3) * sin(cubic.k / 3.0);
		cubic.p = (cubic.b / (3.0 * cubic.a)) * -1;

		cubic.x1 = 2 * cubic.j * cos(cubic.k / 3.0) - (cubic.b / (3.0 * cubic.a));
		cubic.x2 = cubic.l * (cubic.m + cubic.n) + cubic.p;
		cubic.x3 = cubic.l * (cubic.m - cubic.n) + cubic.p;
		printf("x1 = %g x2 = %g x3 = %g\n", cubic.x1, cubic.x2, cubic.x3);
	}
	else if (cubic.h > 0)
	{ // One real roots and two complex roots
		cubic.r = -(cubic.g / 2.0) + sqrt(cubic.h);
		if (cubic.r >= 0)
			cubic.s = pow(cubic.r, 1 / 3.0);
		else
			cubic.s = pow((-cubic.r), 1 / 3.0) * -1;
		cubic.t = -(cubic.g / 2.0) - sqrt(cubic.h);
		if (cubic.t >= 0)
			cubic.u = pow(cubic.t, 1 / 3.0);
		else
			cubic.u = pow(cubic.t, 1 / 3.0) * -1;
		cubic.x1 = (cubic.s + cubic.u) - (cubic.b / (3.0 * cubic.a));
		cubic.x2 = -(cubic.s + cubic.u) / 2 - (cubic.b / (3.0 * cubic.a));
		cubic.x2_im = (cubic.s - cubic.u) * sqrt(3) * 0.5;
		cubic.x3 = -(cubic.s + cubic.u) / 2 - (cubic.b / (3.0 * cubic.a));
		cubic.x3_im = -(cubic.s - cubic.u) * sqrt(3) * 0.5;
		printf("x1 = %g x2 = %g + %gi x3 = %g + %gi\n", cubic.x1, cubic.x2, cubic.x2_im, cubic.x3, cubic.x3_im);
	}
}
