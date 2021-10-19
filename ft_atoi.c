/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:27:37 by oupside           #+#    #+#             */
/*   Updated: 2021/10/17 15:39:26 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char	*str)
{
	unsigned long long	num;
	int					znak;

	num = 0;
	znak = 1;
	while (*str == '\f' || *str == '\r' || *str == '\n' \
			|| *str == '\v' || *str == '\t' || *str == ' ')
	{
		str++;
	}
	if (*str == '-')
		znak = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str++ - '0';
		if (znak == -1 && num >= 9223372036854775807)
			return (0);
		else if (znak == 1 && num >= 9223372036854775807)
			return (-1);
	}
	return (num * znak);
}
