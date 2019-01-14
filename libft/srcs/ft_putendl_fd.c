/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:24:45 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:25:08 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes the string s in a file, follow by '\n'.
*/

#include "../includes/libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd((char *)s, fd);
	ft_putchar_fd('\n', fd);
}
