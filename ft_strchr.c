/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:55:25 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:54:34 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	while (*str)
	{
		if (*str++ == (char)s)
		{
			return ((char *)str - 1);
		}
	}
	if (s == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
