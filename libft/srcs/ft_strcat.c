/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:29:59 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:30:27 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** appends the src string to the dest string,
** overwriting the terminating null byte ('\0') at the end of dest,
** and then adds a terminating null byte.
*/

#include "../includes/libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int dest_len;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
