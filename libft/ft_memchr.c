/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:03:34 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:08:25 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tmp;
	unsigned char	*str;
	size_t			i;

	tmp = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tmp == str[i])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
