/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:25:58 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:26:13 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the string s on stdout, follow by '\n'.
*/

#include "../includes/libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr((char *)s);
	ft_putchar('\n');
}
