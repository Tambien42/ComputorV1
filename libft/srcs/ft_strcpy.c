/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:33:26 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:33:58 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** copies the string pointed to by src, including the terminating
** null byte ('\0'), to the buffer pointed to by dest.
*/

#include "../includes/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
