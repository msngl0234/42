/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:12:50 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:43:22 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && start < end)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	dest = (char *)malloc(end - start + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1 + start, end - start);
	dest[end - start] = '\0';
	return (dest);
}
