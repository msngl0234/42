/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:54:57 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 15:49:44 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	ft_value_print(int len, char *ptr, long num)
{
	while (len > 0)
	{
		len--;
		ptr[len] = (num % 10) + '0';
		num /= 10;
	}
}

static int	ft_numlen(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	num;

	num = n;
	len = ft_numlen(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (num < 0)
	{
		num *= -1;
		ft_value_print(len, ptr, num);
		ptr[0] = '-';
	}
	else
		ft_value_print(len, ptr, num);
	return (ptr);
}
