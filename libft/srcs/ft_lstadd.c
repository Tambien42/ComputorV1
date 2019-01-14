/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:02:18 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:02:34 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Add the new element at the beginning of the list.
*/

#include "../includes/libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
	{
		new->next = *alst;
		*alst = new;
	}
}
