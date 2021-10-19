/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:08:24 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 17:22:09 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strrchr(const char	*str, int	s)
{
	const char	*str1;

	str1 = str;
	while (*str)
	{
		str++;
	}
	while (str >= str1)
	{
		if (*str-- == (char)s)
		{
			return ((char *)str + 1);
		}
	}
	return (NULL);
}
