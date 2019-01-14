/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:35:46 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:36:07 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a pointer to a new string which is a duplicate of the string s.
*/

#include "../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
