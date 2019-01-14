/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 13:53:07 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:47:01 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Put a string in uppercase.
*/

#include "../includes/libft.h"

char	*ft_strtoupper(char *s)
{
	int i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}
