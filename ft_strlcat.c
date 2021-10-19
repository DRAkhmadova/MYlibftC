/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:00:20 by oupside           #+#    #+#             */
/*   Updated: 2021/10/17 16:05:11 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	d;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	d = dest_len + src_len;
	if (dest_len >= size)
		return (size + src_len);
	else
	{
		size = size - dest_len;
		while (size > 1 && *src)
		{
			dest[dest_len] = *src;
			src++;
			dest_len++;
			size--;
		}
		dest[dest_len] = '\0';
	}
	return (d);
}
