/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:16:05 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:16:44 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** searches for the first occurrence of the character c
** in the first n bytes of the string pointed to, by the argument str.
*/

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *temp;

	temp = (unsigned char *)s;
	while (n > 0)
	{
		if (*temp == (unsigned char)c)
			return (temp);
		else
			temp++;
		n--;
	}
	return (NULL);
}
