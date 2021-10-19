/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:34:01 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 16:37:46 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t	n, size_t	size)
{
	char	*d;

	d = malloc(n * size);
	if (!d)
		return (NULL);
	ft_bzero(d, n * size);
	return (d);
}
