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

char	*transf(char *d, long nc, int count)
{
	if (nc < 0)
	{
		while (count)
		{
			d[count - 1] = -nc % 10 + '0';
			nc = nc / 10;
			count--;
		}
		d[0] = '-';
	}
	else
	{
		while (count)
		{
			d[count - 1] = nc % 10 + '0';
			nc = nc / 10;
			count--;
		}
	}
	return (d);
}

char	*ft_itoa(int n)
{
	char	*d;
	int		count;
	long	nc;

	nc = n;
	count = 0;
	if (n == 0 || n == -0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	if (nc < 0)
		count++;
	d = (char *)ft_calloc((count + 1), sizeof(char));
	if (!d)
		return (NULL);
	transf(d, nc, count);
	return (d);
}
