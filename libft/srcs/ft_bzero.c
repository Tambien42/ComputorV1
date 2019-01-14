/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:56:07 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 14:56:38 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Sets the first n bytes of the area starting at s to zero.
*/

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
