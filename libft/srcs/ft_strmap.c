/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:43:45 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:44:14 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre pour creer une nouvelle chaine “fraiche” (avec malloc)
** resultant des applications successives de f.
*/

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	str = NULL;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str)
		{
			i = 0;
			while (s[i])
			{
				str[i] = f(s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
