/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 11:40:24 by nugoncal          #+#    #+#             */
/*   Updated: 2025/06/17 11:40:50 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>      // for open()
#include <stdio.h>      // for printf()
#include <unistd.h>     // for close()
#include <stdlib.h>     // for free()

char    *get_next_line(int fd); // make sure this matches your header

int	main(void)
{
	int		fd;
	char	*line;
	int		line_number = 1;

	// Open the file for reading (change "test.txt" to any file you want)
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}

	// Read and print lines one by one
	line = get_next_line(fd);
	while (line)
	{
		printf("Line %d: [%s]", line_number, line);
		free(line);
		line = get_next_line(fd);
		line_number++;
	}

	close(fd);
	return (0);
}

