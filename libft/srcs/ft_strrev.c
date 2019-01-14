/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:44:58 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:45:17 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrev(char *s)
{
	char	*rev;
	int		i;
	int		size;

	if (s == NULL)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	rev = (char *)malloc(sizeof(char) * size + 1);
	if (rev == NULL)
		return (NULL);
	size--;
	while (size != -1)
		rev[i++] = s[size--];
	rev[i] = '\0';
	return (rev);
}
