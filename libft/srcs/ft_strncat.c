/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:46:08 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:46:57 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Concatenates or appends first n characters from src,
** overwriting the terminating null byte ('\0') at the end of dest, to dest.
** All characters from src are copied including the terminating null character.
*/

#include "../includes/libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	int		dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst);
}
