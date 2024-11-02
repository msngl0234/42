/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:49:33 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:10:44 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	tmp;
	size_t			i;

	tmp = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == tmp)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == tmp)
		return ((char *)&s[i]);
	return (NULL);
}
