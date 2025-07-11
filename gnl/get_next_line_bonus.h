/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:29:17 by nugoncal          #+#    #+#             */
/*   Updated: 2025/07/02 12:55:51 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define MAX_FILES 10000

char	*get_next_line(int fd);

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	strlen_at(const char *s, int c);
char	*cpy_buffer(const char *s, size_t n);
char	*find_chr(const char *s, int c);
char	*merge_last_and_current(char *s1, const char *s2);

#endif
