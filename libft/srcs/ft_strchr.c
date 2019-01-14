/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:30:58 by fchuc             #+#    #+#             */
/*   Updated: 2018/12/15 16:56:45 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns a pointer to the first occurrence of the character c in the string s.
*/

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// char *
// ftb_strchr(string, c)
//         register char *string;		/* String to search. */
//         register int c;			/* Desired character. */
// {
//     register int x;
//
//     while (1) {
//         x = *string++;
//         if (x == c) {
//             return string - 1;
//         }
//         if (x == 0) {
//             return (char *) 0;
//         }
//     }
// }
