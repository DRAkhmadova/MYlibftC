/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:06:10 by oupside           #+#    #+#             */
/*   Updated: 2021/10/17 16:10:25 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t	size)
{
	size_t	src_len;
	size_t	src_size;

	src_len = ft_strlen(src);
	src_size = src_len + 1;
	if (src_size < size)
	{
		while (src_size--)
		{
			*dest++ = *src++;
		}
	}
	else if (size != 0)
	{
		while (--size)
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (src_len);
}
