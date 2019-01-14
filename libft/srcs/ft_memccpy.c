/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:14:28 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:15:44 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies no more than n bytes from memory area src to memory area dest,
** stopping when the character c is found.
*/

#include "../includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *tmp;

	tmp = (unsigned char *)src;
	while (n)
	{
		if (*tmp == (unsigned char)c)
		{
			*(unsigned char *)dest++ = *tmp++;
			return (dest);
		}
		*(unsigned char *)dest++ = *tmp++;
		n--;
	}
	return (NULL);
}
