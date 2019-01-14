/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_rev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:03:49 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:04:28 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Reverse list.
*/

#include "../includes/libft.h"

void	ft_list_rev(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !*lst)
		return ;
	tmp = NULL;
	while (*lst)
	{
		tmp2 = (*lst)->next;
		(*lst)->next = tmp;
		tmp = *lst;
		*lst = tmp2;
	}
	*lst = tmp;
}
