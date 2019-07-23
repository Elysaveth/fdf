/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdelgado <vdelgado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 20:24:04 by vdelgado          #+#    #+#             */
/*   Updated: 2019/07/20 22:06:53 by vdelgado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_check(const int fd, char **line, char **buff, int i)
{
	int		j;
	char	*tmp;

	j = 0;
	while (buff[fd][j] != '\n' && buff[fd][j] != '\0')
		j++;
	if (buff[fd][j] == '\0')
	{
		if (i == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(buff[fd]);
		ft_strdel(&buff[fd]);
	}
	else if (buff[fd][j] == '\n')
	{
		*line = ft_strsub(buff[fd], 0, j);
		tmp = ft_strdup(buff[fd] + j + 1);
		free(buff[fd]);
		buff[fd] = tmp;
		if (buff[fd][0] == '\0')
			ft_strdel(&buff[fd]);
	}
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*buff[256];
	char		copy[BUFF_SIZE + 1];
	char		*tmp;
	int			i;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((i = read(fd, copy, BUFF_SIZE)) > 0)
	{
		copy[i] = '\0';
		if (!buff[fd])
			buff[fd] = ft_strnew(1);
		tmp = ft_strjoin(buff[fd], copy);
		free(buff[fd]);
		buff[fd] = tmp;
		if (ft_strchr(copy, '\n'))
			break ;
	}
	if (i < 0)
		return (-1);
	else if (i == 0 && (buff[fd] == NULL || buff[fd][0] == '\0'))
		return (0);
	return (ft_check(fd, line, buff, i));
}
