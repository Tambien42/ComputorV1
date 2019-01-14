/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:34:24 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:35:00 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en parametre l’adresse d’une chaine de caracteres
** qui doit etre liberee avec free et son pointeur mis a NULL.
*/

#include "../includes/libft.h"

void	ft_strdel(char **as)
{
	if (as != '\0' && *as != '\0')
	{
		free(*as);
		*as = NULL;
	}
}
