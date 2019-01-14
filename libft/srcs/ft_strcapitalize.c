/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:11:44 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:12:32 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Puts the first letter of a word in uppercase.
*/

#include "../includes/libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;
	int m;

	i = 0;
	m = 1;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (m == 1)
				str[i] = str[i] - 32;
			m = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			m = 0;
		else
			m = 1;
		i++;
	}
	return (str);
}
