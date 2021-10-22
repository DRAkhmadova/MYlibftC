/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:48:31 by oupside           #+#    #+#             */
/*   Updated: 2021/10/20 14:49:09 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	res_free(char **res)
{
	int f;
    f = 0;
	while (res[f])
	{
		free(res[f]);
		f++;
	}
	free(res);
}

int	w_count(char const *s, char c)
{
	int	w_count;
	
	w_count = 0;
	while (*s)
	{
		if (*s == c)
			while (*s && *s == c)
				s++;
		else if (*s != c)
		{
			w_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (w_count);
}

char	**ft_fill(char **res, int i, char const *s, char c)
{
	int count;
	char const *s1;
	int f;
	
	f = 0;
	count = 0;
	s1 = s;
	while (*s && *s != c)
	{
		count++;
		s++;
	}
	res[i] = (char *)malloc(sizeof(char) * count + 1);
	if(!res[i])
		res_free(res);
	count = 0;
	while (*s1 && *s1 != c)
	{
		res[i][count] = *s1;
		count++;
		s1++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int	count;
	int	i;
	
	if(!s)
		return (NULL);
	count = w_count(s, c);
	res = (char **)malloc(sizeof(char *) * count + 1);
	if(!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			while (*s && *s == c)
				s++;
		else if (*s != c)
		{
			res = ft_fill(res, i, s, c);
			while (*s && *s != c)
				s++;
			i++;
		}
	}
	return(res);
}
