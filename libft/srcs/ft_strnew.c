/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:54:29 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:55:00 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc) et retourne une chaine de caractere “fraiche”
** terminee par un ’\0’. Chaque caractere de la chaine est initialise a ’\0’.
*/

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
