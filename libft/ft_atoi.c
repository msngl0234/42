/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msengul <msengul@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:35:01 by msengul           #+#    #+#             */
/*   Updated: 2024/11/01 17:13:50 by msengul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(int x);

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

static int	ft_isspace(int x)
{
	if (x == '\t' || x == '\n' || x == '\v' || x == '\f' || x == '\r'
		|| x == ' ')
		return (1);
	return (0);
}
