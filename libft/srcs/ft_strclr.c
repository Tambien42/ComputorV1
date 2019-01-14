/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:31:59 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:32:24 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assigne la valeur ’\0’ a tous les caracteres de la chaine passee en
** parametre.
*/

#include "../includes/libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
