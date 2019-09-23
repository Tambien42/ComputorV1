/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:21 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:12:54 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorV1.h"

void	print_equation(int *terms, int length)
{
	int i;

	i = 0;
	while (i <= length)
	{
		if (terms[i] != 0)
		{
			if (terms[i] < 0)
			{
				if (i == 0)
					printf("-");
				else
					printf(" - ");
				printf("%d", -1 * terms[i]);
			}
			else
			{
				if (i != 0)
					printf(" + ");
				printf("%d", terms[i]);
			}
			if (i >= 1)
			{
				printf("*X");
				if (i > 1)
					printf("^%d", i);
			}
		}
		else if (terms[i] == 0)
		{
			i++;
			continue;
		}
		i++;
	}
	printf(" = 0\n");
}
