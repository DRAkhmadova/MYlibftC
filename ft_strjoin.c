/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:39:32 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:46:37 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	d_len;

	if (!s1 || !s2)
		return (NULL);
	d_len = ft_strlen(s1) + ft_strlen(s2);
	d = malloc(sizeof(char) * d_len + 1);
	if (!d)
		return (NULL);
	while (*s1)
		*d++ = *s1++;
	while (*s2)
		*d++ = *s2++;
	*d = '\0';
	return (d - d_len);
}
