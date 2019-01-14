/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:38:22 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:38:41 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre en precisant son index en premier argument.
*/
#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
