/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oupside <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:22:20 by oupside           #+#    #+#             */
/*   Updated: 2021/10/15 17:25:43 by oupside          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_tolower(int	d)
{
	if (d >= 'A' && d <= 'Z')
	{
		d = d + 32;
	}
	return (d);
}
