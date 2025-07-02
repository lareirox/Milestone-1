/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maingpt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:08:48 by nugoncal          #+#    #+#             */
/*   Updated: 2025/07/02 11:08:56 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>    // open
#include <unistd.h>   // close
#include <stdio.h>    // printf
#include <stdlib.h>   // free

char	*get_next_line(int fd); // make sure your header matches this

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		line_count = 1;

	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}

	printf("Reading file: %s\n\n", argv[1]);

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Line %d: [%s]\n", line_count, line);
		free(line);
		line_count++;
	}

	printf("\nEnd of file reached or error occurred.\n");

	close(fd);
	return (0);
}
