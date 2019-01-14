/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:37:19 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:37:48 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre.
*/

#include "../includes/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	while (s != NULL && *s)
	{
		f(s);
		s++;
	}
}
