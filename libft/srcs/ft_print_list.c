/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:07:58 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:08:34 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prints list.
*/

#include "../includes/libft.h"

void	ft_print_list(t_list *list)
{
	if (list)
	{
		ft_putstr((char *)list->content);
		ft_putchar(' ');
		ft_putnbr(list->content_size);
		ft_putchar('\n');
		ft_print_list(list->next);
	}
}
