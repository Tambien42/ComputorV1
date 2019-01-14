/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:27:59 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 16:28:46 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurrence of the null-terminated string s2 in the
** string s1, where not more than n characters are searched.
*/

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 != '\0' && n >= ft_strlen(s2))
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, ft_strlen(s2)) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
