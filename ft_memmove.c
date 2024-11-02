/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:15:38 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:09:43 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

static void	ft_move(char *dst, char *src, size_t len);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_src;
	char	*c_dst;

	if (!dst && !src)
		return (NULL);
	c_src = (char *)src;
	c_dst = (char *)dst;
	ft_move(c_dst, c_src, len);
	return (dst);
}

static void	ft_move(char *dst, char *src, size_t len)
{
	size_t	i;

	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			dst[len] = src[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
}
