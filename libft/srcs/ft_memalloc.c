/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:13:30 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:14:02 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc) et retourne une zone de memoire “fraiche”.
** La memoire allouee est initialisee a 0.
*/

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
