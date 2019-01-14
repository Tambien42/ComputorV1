/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchuc <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 10:22:11 by fchuc             #+#    #+#             */
/*   Updated: 2016/02/11 09:06:02 by fchuc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

static t_file	*find_file_descriptor(int const fd)
{
	static t_file	*files;
	t_file			*tmp;

	if (files)
	{
		tmp = files;
		while (tmp)
		{
			if (tmp->fd == fd)
				return (tmp);
			tmp = tmp->next;
		}
	}
	if ((tmp = malloc(sizeof(t_file))) == NULL)
		return (NULL);
	tmp->fd = fd;
	tmp->buffer = NULL;
	tmp->ret = 1;
	tmp->next = files;
	files = tmp;
	return (tmp);
}

static int		get_line(t_file *file, char **line)
{
	char *tmp;

	if ((tmp = ft_strchr(file->buffer, '\n')) != NULL)
	{
		*tmp = '\0';
		*line = ft_strdup(file->buffer);
		ft_memmove(file->buffer, tmp + 1, ft_strlen(tmp + 1) + 1);
		return (1);
	}
	return (0);
}

static int		read_file(t_file *file, char **line)
{
	char	str[BUFF_SIZE + 1];
	char	*tmp2;

	while ((file->ret = read(file->fd, str, BUFF_SIZE)) > 0)
	{
		str[file->ret] = '\0';
		tmp2 = file->buffer;
		file->buffer = ft_strjoin(file->buffer, str);
		ft_strdel(&tmp2);
		if (get_line(file, line) == 1)
			return (1);
	}
	if (file->ret == -1)
		return (-1);
	*line = ft_strdup(file->buffer);
	ft_strdel(&file->buffer);
	if (line[0][0] != '\0')
		return (1);
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	t_file	*file;
	int		ret;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if ((file = find_file_descriptor(fd)) == NULL)
		return (-1);
	if (file->buffer == NULL)
		file->buffer = ft_strnew(0);
	if (get_line(file, line) == 1)
		return (1);
	ret = read_file(file, line);
	return (ret);
}
