/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:44:30 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:45:47 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f a chaque caractere de la chaine de caracteres
** passee en parametre en precisant son index pour creer une nouvelle chaine
** “fraiche” (avec malloc) resultant des applications successives de f.
*/

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned in, char))
{
	int		i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
