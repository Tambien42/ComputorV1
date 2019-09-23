/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fraction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:06 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:25:47 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorV1.h"
#include <stdio.h>
#define ACCURACYFACTOR 0.000005

void	decimal_to_fraction(double decimal)
{
	double number;
	double decimalsign;
	double z;
	double previousdenominator;
	double scratchvalue;
	double numerator;
	double denominator;

	number = 0.0;
	decimalsign = 0.0;
	z = 0;
	previousdenominator = 0.0;
	scratchvalue = 0.0;
	numerator = 0.0;
	denominator = 1.0;
	decimalsign = (decimal < 0) ? -1.0 : 1.0;
	number = fabs(decimal);
	if (fmod(decimal, 1.0) == 0.0)
	{
		numerator = (int)number * decimalsign;
		denominator = 1.0;
		return ;
	}
	if (number < 1.0e-19)
	{
		numerator = decimalsign;
		denominator = 9999999999999999999.0;
		return ;
	}
	if (number > 1.0e+19)
	{
		numerator = 9999999999999999999.0 * decimalsign;
		denominator = 1.0;
		return ;
	}
	z = number;
	z = 1.0 / (z - (int)z);
	scratchvalue = denominator;
	denominator = denominator * (int)z + previousdenominator;
	previousdenominator = scratchvalue;
	numerator = (int)(number * denominator + 0.5);
	while (fabs(number - (numerator / denominator)) > ACCURACYFACTOR && fmod(z, 1.0) != 0.0)
	{
		z = 1.0 / (z - (int)z);
		scratchvalue = denominator;
		denominator = denominator * (int)z + previousdenominator;
		previousdenominator = scratchvalue;
		numerator = (int)(number * denominator + 0.5);
	}
	numerator = numerator * decimalsign;
	printf("%.0f / %.0f\n", numerator, denominator);
	printf("END========================\n");
}
