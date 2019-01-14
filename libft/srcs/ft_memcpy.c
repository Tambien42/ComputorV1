/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:18:04 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:19:07 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy a block of data from a source address to a destination address.
*/

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_temp;
	char	*dest_temp;
	char	*temp[n];
	size_t	i;

	src_temp = (char *)src;
	dest_temp = (char *)dest;
	i = 0;
	while (i < n)
	{
		temp[i] = &src_temp[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest_temp[i] = *temp[i];
		i++;
	}
	return (dest_temp);
}
