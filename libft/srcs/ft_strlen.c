/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:42:30 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:42:54 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Calculates the length of the string s.
*/

#include "../includes/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t count;

	count = 0;
	while (str[count] != '\0')
		count = count + 1;
	return (count);
}
