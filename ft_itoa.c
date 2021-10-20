/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:11:44 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:19:16 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_itoa(int n)
{
	char	*d;

	d = ft_strdup("0");
	if (!(d))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		return (ft_strjoin ("-", ft_itoa(n)));
	}
	*d = *d + (n % 10);
	if (n >= 0 && n <= 9)
	{
		return (ft_strdup(d));
	}
	else
		return (ft_strjoin(ft_itoa(n / 10), d));
}
