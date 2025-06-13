/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:41:32 by nugoncal          #+#    #+#             */
/*   Updated: 2025/06/13 16:27:04 by nugoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcopy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

size_t	strlen_at(const char *str, int avoid)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != avoid)
		i++;
	return (i);
}

char	*find_chr(const char *buffer, int to_find)
{
	if (!buffer)
		return (NULL);
	while (*buffer)
	{
		if (*(unsigned char *)buffer == (unsigned char)to_find)
			return ((char *)buffer);
		buffer++;
	}
	if (*(unsigned char *)buffer == (unsigned char)to_find)
		return ((char *)buffer);
	return (NULL);
}

char	*cpy_buffer(const char *buffer, size_t len)
{
	char	*cpy;
	size_t	i;

	cpy = (char *) malloc(len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (buffer[i] && i < len)
	{
		cpy[i] = buffer[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*merge_last_and_current(char *last, const char *current)
{
	size_t	len_last;
	size_t	len_curr;
	char	*merge;

	len_last = 0;
	len_curr = 0;
	if (last)
		len_last = strlen_at(last, '\0');
	len_curr = strlen_at(current, '\0');
	merge = (char *)malloc(len_last + len_curr);
	if (last)
		free(last);
	return (merge);
}
