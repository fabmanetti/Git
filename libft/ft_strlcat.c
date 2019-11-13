/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:24:34 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/08 20:39:47 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int x;
	unsigned int y;
	unsigned int c;

	x = 0;
	y = 0;
	c = 0;
	while (dst[x] != '\0')
	{
		x++;
		c++;
	}
	if (x < size)
	{
		while (src[y] != '\0' && x + 1 < size)
		{
			dst[x] = src[y];
			x++;
			y++;
		}
		dst[x] = '\0';
		return (c + ft_strlen(src));
	}
	else
		return (size + ft_strlen(src));
}
