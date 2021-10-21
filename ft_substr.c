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

char	*chek_ss(char *ss)
{
	if (!ss)
		return (NULL);
	else
	{
		ss[0] = 0;
		return (ss);
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			ss_len;
	char			*ss;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ss_len = len;
	if (start >= ft_strlen(s))
	{
		ss = (char *)malloc(1);
		ss = chek_ss(ss);
		return (ss);
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
	return (ss - ss_len);
}
