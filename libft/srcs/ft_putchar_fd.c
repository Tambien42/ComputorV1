/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:23:09 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:23:32 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Writes a character specified by the argument char to a file.
*/

#include "../includes/libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
