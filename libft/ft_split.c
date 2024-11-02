/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:56:54 by msengul           #+#    #+#             */
/*   Updated: 2024/10/31 20:02:55 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_free(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static int	count_words(const char *str, char sep)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			count++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (count);
}

static int	word_len(const char *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	arr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		arr[i] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
		if (!arr[i])
			return (ft_free(arr, i));
		ft_strlcpy(arr[i], s, word_len(s, c) + 1);
		s += word_len(s, c);
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
