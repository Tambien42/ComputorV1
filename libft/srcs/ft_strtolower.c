/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:46:01 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:49:37 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Puts a string in lowercase.
*/

#include "../includes/libft.h"

char	*ft_strtolower(char *s)
{
	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_tolower(s[i]);
		i++;
	}
	return (s);
}
