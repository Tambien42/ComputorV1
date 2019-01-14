/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:19:23 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:20:43 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en parametre l’adresse d’un pointeur
** dont la zone pointee doit etre liberee avec free,
** puis le pointeur est mis a NULL.
*/

#include "../includes/libft.h"

void	ft_memdel(void **ap)
{
	if (ap != '\0' && *ap != '\0')
	{
		free(*ap);
		*ap = NULL;
	}
}
