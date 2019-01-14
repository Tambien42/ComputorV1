/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:52:11 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:53:05 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies at most n bytes of the string pointed to by src,
** including the terminating null byte ('\0'),
** to the buffer pointed to by dest.
*/

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
