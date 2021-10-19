/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:46:11 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 16:48:31 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void	*str1, const void	*str2, size_t	n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	d1 = (unsigned char *)str1;
	d2 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (*d1 == *d2 && --n)
	{
		d1++;
		d2++;
	}
	return ((int)(*d1 - *d2));
}
