/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:36:35 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:36:55 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare lexicographiquement s1 et s2. Si les deux chaines sont egales,
** la fonction retourne 1, ou 0 sinon.
*/

#include "../includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!ft_strcmp(s1, s2))
		return (1);
	return (0);
}
