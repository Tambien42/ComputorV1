/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:21:55 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:22:47 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Fills the first n bytes of the memory area pointed to by s
** with the constant byte c.
*/

#include "../includes/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
