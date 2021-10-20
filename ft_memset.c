/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:44:01 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:23:15 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memset(void *s, int d, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (len--)
	{
		*str++ = (unsigned char)d;
	}
	return (s);
}
