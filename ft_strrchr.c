/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:09:58 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:17:38 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_null.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[s_len]);
	while (s_len > 0)
	{
		if (s[s_len - 1] == (unsigned char)c)
			return ((char *)&s[s_len - 1]);
		s_len--;
	}
	return (NULL);
}
