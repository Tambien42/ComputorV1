/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:01:33 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 16:03:15 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloue (avec malloc) et retourne la copie “fraiche” d’un tronçon
** de la chaine de caracteres passee en parametre. Le tronçon
** commence a l’index start et a pour longueur len.
*/

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		substr[i] = s[start + i];
		i++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
