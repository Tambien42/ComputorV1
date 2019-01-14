/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 16:26:53 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 16:27:20 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurrenceof the null-terminated string s2
** in the null-terminated string s1.
*/

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if (s2[0] == '\0')
		return (char *)(s1);
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if ((s2[j]) == '\0')
			{
				return (char *)(&(s1[i - j]));
			}
		}
		i++;
		i = i - j;
	}
	return (NULL);
}
