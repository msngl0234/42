/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:53:02 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:11:18 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*copy;

	s1_len = ft_strlen(s1);
	copy = (char *)malloc(s1_len + 1);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s1, s1_len);
	copy[s1_len] = '\0';
	return (copy);
}
