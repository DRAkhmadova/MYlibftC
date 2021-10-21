/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 19:33:31 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:56:31 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!*s2)
		return ((char *)s1);
	if (!*s1 || n == 0)
		return (NULL);
	while (*s1 && n > 0)
	{
		if (*s1 == *s2)
		{
			if (ft_strncmp(s1, s2, ft_strlen(s2)) == 0 && ft_strlen(s2) <= n)
				return ((char *)s1);
		}
		n--;
		s1++;
	}
	return (NULL);
}
