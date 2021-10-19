/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:41:55 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 16:45:28 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void	*str, int	d, size_t	n)
{
	unsigned char	*str1;

	str1 = (unsigned char *)str;
	while (n--)
	{
		if (*str1++ == (unsigned char)d)
			return (str1 - 1);
	}
	return (NULL);
}
