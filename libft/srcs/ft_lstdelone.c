/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 15:06:06 by fchuc             #+#    #+#             */
/*   Updated: 2015/12/04 15:07:19 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Prend en parametre l’adresse d’un pointeur sur un maillon et libere la
** memoire du contenu de ce maillon avec la fonction del passee en parametre
** puis libere la memoire du maillon en lui meme avec free.
*/

#include "../includes/libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
