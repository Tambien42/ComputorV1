/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:09:21 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:10:50 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Parcourt la liste lst en appliquant a chaque maillon la fonction f
** et cree une nouvelle liste “fraiche” avec malloc resultant des
** applications successives.
*/

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list*tmp;
	t_list*lstnew;
	t_list*res;

	lstnew = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!lstnew)
		{
			lstnew = tmp;
			res = lstnew;
			lstnew->next = NULL;
		}
		else
		{
			lstnew->next = tmp;
			tmp->next = NULL;
			lstnew = lstnew->next;
		}
		lst = lst->next;
	}
	return (res);
}
