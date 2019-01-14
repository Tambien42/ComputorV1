/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Get_Next_Line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:56:23 by fchuc             #+#    #+#             */
/*   Updated: 2016/01/14 15:08:57 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# define BUFF_SIZE 4096

typedef struct		s_file
{
	int				fd;
	int				ret;
	char			*buffer;
	struct s_file	*next;
}					t_file;

int					get_next_line(int const fd, char **line);

#endif
