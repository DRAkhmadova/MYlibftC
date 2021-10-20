/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:05:39 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 19:08:41 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char 	*d;

	if (!s1 || !set)
		return(NULL);

	while (*s1)
	{
		if(*s1 == *set)
			s1++;
		else
			d = (char *)s1;
		s1++;
	}
	return(ft_strdup(d));
}
