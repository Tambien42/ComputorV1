/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:17 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:57:56 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"
#include <stdio.h>

int		polynomial_degree(char *equation, int degree)
{
	char	*ret;
	int		exponent;

	exponent = 0;
	if ((ret = strchr(equation, 'X')) != NULL)
	{
		if ((ret = strchr(ret, '^')) != NULL)
		{
			exponent = atoi(ret + 1);
		}
		else
		{
			exponent = 1;
			ret = equation;
		}
		degree = polynomial_degree(ret + 1, exponent);
		if (exponent > degree)
		{
			degree = exponent;
		}
	}
	return (degree);
}

int		get_coefficient(char *str)
{
	if (str[0] == 'X' || (str[0] == '-' && str[1] == 'X') || (str[0] == '+' && str[1] == 'X'))
	{
		return (1);
	}
	return (atoi(str));
}

void	parse_terms(int *terms, char *str, int sign)
{
	if (strchr(str, 'X') != NULL)
	{
		if (strchr(str, '^') != NULL)
		{
			terms[atoi(strchr(str, '^') + 1)] = terms[atoi(strchr(str, '^') + 1)] + sign * get_coefficient(str);
		}
		else
		{
			terms[1] = terms[1] + sign * get_coefficient(str);
		}
	}
	else
	{
		terms[0] = terms[0] + sign * get_coefficient(str);
	}
}

void	parse(char *equation)
{
	char	**members;
	int		terms[polynomial_degree(equation, 0)];
	int		sign;
	char	*ret;
	char	*copy;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (terms[i])
	{
		terms[i] = 0;
		i++;
	}
	i = 0;
	members = ft_strsplit(equation, '=');
	while (members[i])
	{
		sign = (i == 0) ? 1 : -1;
		ret = members[i];
		j = 0;
		while (members[i][j])
		{
			if ((members[i][0] == '+' || members[i][0] == '-') && j == 0)
			{
				j++;
				ret++;
			}
			else if (members[i][j] == '+' || members[i][j] == '-')
			{
				copy = malloc(sizeof(char) * j + 1);
				strncpy(copy, members[i], j);
				parse_terms(terms, copy, sign);
				free(copy);
				memcpy(members[i], ret, strlen(ret - 1));
				ret = members[i];
				j = 0;
			}
			else if (members[i][j + 1] == '\0' && members[i] != NULL)
			{
				parse_terms(terms, members[i], sign);
				j++;
				ret++;
			}
			else
			{
				j++;
				ret++;
			}
		}
		i++;
	}
	printf("Reduced form: ");
	if (polynomial_degree(equation, 0) == 0 || check_zero(terms, polynomial_degree(equation, 0)) == 0)
		printf("%d = 0\n", terms[0]);
	else
		print_equation(terms, polynomial_degree(equation, 0));
	printf("Polynomial degree: %d\n", polynomial_degree(equation, 0));
	solve(terms, polynomial_degree(equation, 0));
}
