/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iskartal <iskartal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:54:27 by iskartal          #+#    #+#             */
/*   Updated: 2023/09/06 14:39:33 by iskartal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fill_str(char *str, int fd)
{
	char	*buffer;
	int		i;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	i = 1;
	while (ft_strchr(str, '\n') == 0 && i != 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(str);
			free(buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str = fill_str(str, fd);
	if (!str)
		return (NULL);
	line = find_line(str);
	str = new_str(str);
	return (line);
}
