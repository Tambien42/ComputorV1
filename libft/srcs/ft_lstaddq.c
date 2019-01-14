/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddq.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:06:32 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/10 14:07:05 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstaddq(t_list **alst, t_list *new)
{
	t_list	*end;

	if (!alst)
	{
		*alst = new;
		return ;
	}
	end = ft_list_last(*alst);
	end->next = new;
}
