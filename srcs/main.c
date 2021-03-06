/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 13:32:10 by fchuc             #+#    #+#             */
/*   Updated: 2019/09/23 14:57:52 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "computorv1.h"

//          5 * X^0 + 4 * X^1 - 6 * X ^ 2 = 3 * X^   0
static void	help(void)
{
	printf("Usage :    ./computorv1 [\"equation\"]\n");
}

int			main(int argc, char const *argv[])
{
	char *equation;

	if (argc < 2 || argc > 2)
	{
		help();
		exit(0);
	}
	equation = ft_memalloc(ft_strlen(argv[1]));
	ft_strcpy(equation, argv[1]);
	ft_delspaces(equation);
	if (format(equation) != 0)
	{
		help();
		exit(0);
	}
	parse(equation);
	//free(equation);
	return (0);
}
