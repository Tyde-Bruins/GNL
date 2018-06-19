/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbruins <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 08:47:25 by tbruins           #+#    #+#             */
/*   Updated: 2018/06/19 09:08:33 by tbruins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	eline(char *buff)
{
	int	i;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		return (1);
	return (0);
}

int	gline(const int fd, char *buff, char *strs[fd])
{
	char	*tmp;
	int		ret;

	while ((eline(buff) != 1) && ((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		buff[ret] = '\0';
		tmp = strs[fd];
		strs[fd] = ft_strjoin(tmp, buff);
		ft_strdel(&tmp);
	}
	ft_strdel(&buff);
	if (ret < 0)
		return (-1);
	return (1);
}

int	get_next_line(const int fd, char **line)
{
	int			rn;
	static char	*strs[2147483647];
	char		*buff;
	char		*str;
	char		*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	buff = ft_strnew(BUFF_SIZE);
	if (!strs[fd])
		strs[fd] = ft_strnew(0);
	if ((rn = gline(fd, buff, strs)) == -1)
		return (-1);
	if ((str = ft_strchr(strs[fd], '\n')))
	{
		*line = ft_strsub(strs[fd], 0, str - strs[fd]);
		tmp = strs[fd];
		strs[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strdup(strs[fd]);
	ft_strdel(&strs[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
