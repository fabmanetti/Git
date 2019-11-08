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
#include <stdio.h>

long	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int x;
	unsigned int y;

	x = 0;
	y = 0;
	if (size != 0)
	{
		while (dst[x] != '\0')
			x++;
		while (src[y] != '\0' && y < size)
		{
			dst[x] = src[y];
			x++;
			y++;
		}
		dst[x + 1] = '\0';
	}
	printf("%s\n", dst);
	return (ft_strlen(dst));
}
