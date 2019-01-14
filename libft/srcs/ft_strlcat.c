/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:40:25 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:41:18 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends src to string dst of size size (unlike strncat, size is the
** full size of dst, not space left).  At most siz-1 characters
** will be copied.
*/

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_end = i;
	while (src[i - dst_end] != '\0' && i < size - 1)
	{
		dst[i] = src[i - dst_end];
		i++;
	}
	if (dst_end < size)
		dst[i] = '\0';
	return (dst_end + ft_strlen(src));
}
