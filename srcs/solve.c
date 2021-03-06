/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:28 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 18:17:06 by /usr/bin/whoami  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

float	discriminant(int *terms)
{
	return (terms[1] * terms[1] - 4 * terms[2] * terms[0]);
}

void	zero_degree(int *terms)
{
	if (terms[0] == 0)
	{
		printf("Statement true\n");
		return ;
	}
	printf("statement false\n");
}

void	first_degree(int *terms)
{
	float x;

	x = (-1.0 * terms[0]) / terms[1];
	printf("The solution is:\n");
	printf("%g\n", x);
}

void	second_degree(float discriminant, int *terms)
{
	double x1;
	double x2;
	double real;
	double im;

	if (terms[1] != 0)
	{
		if (discriminant < 0)
		{
			real = -terms[1] / (2 * terms[2]);
			im = ft_sqrt(-discriminant) / (2 * terms[2]);
			printf("Discriminant is strictly negative, the two solutions are:\n");
			printf("%g - %gi\n", real, im);
			printf("%g + %gi\n", real, im);
		}
		else if (discriminant == 0)
		{
			printf("Discriminant is equal to zero, the two solutions is:\n");
			x1 = (-1.0 * terms[1]) / (2.0 * terms[2]);
			printf("%g\n", x1);
		}
		else if (discriminant > 0)
		{
			x1 = (-1.0 * terms[1] - sqrt(discriminant)) / (2.0 * terms[2]);
			x2 = (-1.0 * terms[1] + sqrt(discriminant)) / (2.0 * terms[2]);
			printf("%g\n", x1);
			printf("%g\n", x2);
		}
	}
	else
	{
		x1 = (-1.0 * terms[0] / terms[2]);
		x2 = (1.0 * terms[0] / terms[2]);
		printf("%g\n", x1);
		printf("%g\n", x2);
		decimal_to_fraction((double)x1);
	}
}

void	fourth_degree(void)
{
	printf("The polynomial degree is stricly greater than 3, can't easily be solved.\n");
}

int		check_zero(int *terms, int length)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i <= length)
	{
		if (terms[i] == 0)
			count++;
		i++;
	}
	if (count == length)
		return (0);
	return (1);
}

void	solve(int *terms, int degree)
{
	if (degree == 0 || check_zero(terms, degree) == 0)
		zero_degree(terms);
	else if (degree == 1)
		first_degree(terms);
	else if (degree == 2)
		second_degree(discriminant(terms), terms);
	else if (degree == 3)
		third_degree(terms);
	else
		fourth_degree();
}
