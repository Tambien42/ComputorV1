/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:08:51 by fchuc             #+#    #+#             */
/*   Updated: 2019/02/02 14:11:46 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Finds sqrt of nb.
*/

#include "../includes/libft.h"

int	ft_sqrt(int nb)
{
	int root;
	int sqrt;

	root = 1;
	sqrt = 0;
	if (nb > 214783647)
		return (0);
	while (root <= nb / 2)
	{
		sqrt = root * root;
		if (sqrt == nb)
			return (root);
		root = root + 1;
	}
	return (0);
}
