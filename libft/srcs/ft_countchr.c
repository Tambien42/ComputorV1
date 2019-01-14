/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:51:38 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 13:52:33 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Count how many char c in s.
*/

#include "../includes/libft.h"

int	ft_countchr(const char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}
