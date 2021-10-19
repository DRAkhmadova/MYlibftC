/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:58:55 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 17:02:08 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char	*str)
{
	char	*str_copy;
	size_t	i;

	i = 0;
	str_copy = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!str_copy)
		return (NULL);
	while (str[i] != '\0')
	{
		str_copy[i] = str[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
