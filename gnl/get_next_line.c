/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:43:49 by nugoncal          #+#    #+#             */
/*   Updated: 2025/07/02 15:40:12 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char **buffer)
{
	char	*line;
	char	*keep;
	size_t	til_null;
	size_t	til_new;

	til_new = strlen_at(*buffer, '\n');
	if ((*buffer)[til_new] == '\n')
		til_new++;
	line = cpy_buffer(*buffer, til_new);
	if (!line)
		return (NULL);
	til_null = strlen_at(*buffer, '\0');
	keep = cpy_buffer(*buffer + til_new, til_null - til_new + 1);
	if (!keep)
	{
		free (line);
		return (NULL);
	}
	free (*buffer);
	*buffer = keep;
	return (line);
}

static char	*get_current_buffer(int fd, char *buffer)
{
	char	*current;
	ssize_t	bytes;

	bytes = 1;
	current = (char *) malloc(BUFFER_SIZE + 1);
	if (!current)
		return (NULL);
	while (bytes > 0 && !find_chr(buffer, '\n'))
	{
		bytes = read(fd, current, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		if (bytes == -1)
		{
			free(current);
			free(buffer);
			return (NULL);
		}
		current[bytes] = '\0';
		buffer = merge_last_and_current(buffer, current);
	}
	free (current);
	if (strlen_at(buffer, '\0') > 0)
		return (buffer);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = get_current_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_line(&buffer);
	if (buffer && buffer[0] == '\0')
	{
		free (buffer);
		buffer = NULL;
	}
	return (line);
}
/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Could not open text.txt\n");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
*/

#include <stdio.h>
int	main(int argc, char **argv)
{
	char *line;
	(void)argc;
	int fd = open(argv[1], O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
	return (0);
}
//int	main()
//{
//	int i = 0;
//
//	while (i < 4)
//	{
//		printf("%s\n", get_next_line(0));
//		i++;
//	}
//    return (0);
//}
