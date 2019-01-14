/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:21:13 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/17 14:56:42 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies n bytes from memory area src to memory area dest.
*/

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*dst_tmp;
	const unsigned char		*src_tmp;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (const unsigned char *)src;
	if (!len)
		return (dst);
	if (src_tmp < dst_tmp)
	{
		dst_tmp += len;
		src_tmp += len;
		while (len--)
			*--dst_tmp = *--src_tmp;
	}
	else
		while (len--)
			*dst_tmp++ = *src_tmp++;
	return (dst);
}
