/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:55:32 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:55:49 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a pointer to the last occurrence of the character c in the string s.
*/

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p;

	p = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)p);
}
