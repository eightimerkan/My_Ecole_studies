/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edolgun <edolgun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:21:33 by edolgun           #+#    #+#             */
/*   Updated: 2022/08/22 18:22:24 by edolgun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*store(char *base, int fd)
{
	char	*temp_buffer;
	char	*temp;
	int		reading_status;

	reading_status = 1;
	temp_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp_buffer)
		return (NULL);
	while (!ft_strchr(base, '\n') && reading_status != 0)
	{
		reading_status = read(fd, temp_buffer, BUFFER_SIZE);
		if (reading_status == -1)
		{
			free(temp_buffer);
			return (NULL);
		}
		temp_buffer[reading_status] = '\0';
		if (!base)
			base = ft_strdup("");
		temp = base;
		base = ft_strjoin(temp, temp_buffer);
	}
	free(temp_buffer);
	return (base);
}

char	*pull_new_line(char *base)
{
	char	*my_newline;
	int		my_size_until_newline;

	my_size_until_newline = 0;
	if (!base[my_size_until_newline])
		return (NULL);
	while (base[my_size_until_newline] && base[my_size_until_newline] != '\n')
		my_size_until_newline++;
	my_newline = (char *)malloc((my_size_until_newline + 2)
			* sizeof(char));
	if (!my_newline)
		return (NULL);
	my_size_until_newline = 0;
	while (base[my_size_until_newline] && base[my_size_until_newline] != '\n')
	{
		my_newline[my_size_until_newline] = base[my_size_until_newline];
		my_size_until_newline++;
	}
	if (base[my_size_until_newline] == '\n')
	{
		my_newline[my_size_until_newline] = base[my_size_until_newline];
		my_size_until_newline++;
	}
	my_newline[my_size_until_newline] = '\0';
	return (my_newline);
}

char	*seperate(char *base)
{
	char	*my_newbase;
	int		my_size_until_newline;
	int		i;

	my_size_until_newline = 0;
	i = 0;
	while (base[my_size_until_newline] && base[my_size_until_newline] != '\n')
		my_size_until_newline++;
	if (!base[my_size_until_newline])
	{
		free(base);
		return (NULL);
	}
	my_newbase = (char *)malloc((ft_strlen(base) - my_size_until_newline + 1)
			* sizeof(char));
	if (!my_newbase)
		return (NULL);
	my_size_until_newline++;
	while (base[my_size_until_newline])
		my_newbase[i++] = base[my_size_until_newline++];
	my_newbase[i] = '\0';
	free(base);
	return (my_newbase);
}

char	*get_next_line(int fd)
{
	static char	*base[1024];
	char		*my_line;

	if (!((BUFFER_SIZE > 0) || fd >= 0))
		return (0);
	base[fd] = store(base[fd], fd);
	if (!base[fd])
		return (NULL);
	my_line = pull_new_line(base[fd]);
	base[fd] = seperate(base[fd]);
	return (my_line);
}
