/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:23:04 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:09:57 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	tmp;
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	tmp = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		str[i] = tmp;
		i++;
	}
	return (b);
}
