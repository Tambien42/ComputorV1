/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:53:44 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:54:01 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compare lexicographiquement s1 et s2 jusqu’a n caracteres maximum
** ou bien qu’un ’\0’ ait ete rencontre.
*/

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!ft_strncmp(s1, s2, n))
		return (1);
	return (0);
}
