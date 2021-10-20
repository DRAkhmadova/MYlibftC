/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:09:04 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 19:09:22 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			s_len;
	size_t			ss_len;
	char			*ss;

	s_len = ft_strlen(s);
	ss_len = len;
	if (!s)
		return (NULL);
	if (start >= s_len)
	{
		ss = ft_strdup("0");
		if (!ss)
			return (NULL);
	}
	else 
	{
		ss = ft_calloc(len + 1, sizeof(char));
		if (!ss)
			return (NULL);
		while (len--)
			*ss++ = s[start++];
	}
	*ss = '\0';
	return(ss - ss_len);
}
