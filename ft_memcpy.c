/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:10:17 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:09:17 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cpy_dst;
	unsigned char	*cpy_src;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	cpy_dst = (unsigned char *)dst;
	cpy_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		cpy_dst[i] = cpy_src[i];
		i++;
	}
	return (dst);
}
