/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerie <valerie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:03:40 by valerie           #+#    #+#             */
/*   Updated: 2023/03/19 10:18:18 by valerie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	char			*temp;
	void			*copy;
	unsigned long	i;

	i = 0;
	copy = (void *)malloc(count * size);
	if (copy == NULL)
		return (NULL);
	temp = (char *)copy;
	while (i < size * count)
	{
		temp[i] = 0;
		i++;
	}
	return (copy);
}

char	*ft_strjoin(char *s1, char const *s2)
{
	int		i;
	int		k;
	char	*new_string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	k = 0;
	new_string = ft_calloc((ft_strlen(s1) + ft_strlen(s2)) + 1, sizeof(char));
	if (new_string == NULL)
		return (NULL);
	while (s1[i])
	{
		new_string[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		new_string[i + k] = s2[k];
		k++;
	}
	new_string[i + k] = '\0';
	free(s1);
	s1 = NULL;
	return (new_string);
}

char	*ft_strchr(const char *str, int c)
{
	char	*ptr;

	ptr = (char *)str;
	if (!str)
		return (NULL);
	while (*ptr != (char)c)
	{
		if (*ptr == '\0')
			return (NULL);
		ptr++;
	}
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*s2;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}
