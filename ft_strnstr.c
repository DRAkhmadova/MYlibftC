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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*d;

	if (!(*s2))
		return ((char *)s1);
	if (!(*s1) || n == 0)
		return (NULL);
	while (*s1 && n > 0)
	{
		if (*s1 == *s2)
		{
			d = (char *)s1;
			while (*s1 && *s1++ == *s2++ && n > 0)
			{
				if (!(*s2))
					return (d);
				n--;
			}
		}
		if (!*s1)
			return (NULL);
		n--;
		s1++;
	}
	return (NULL);
}
