/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:47:19 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/14 19:32:40 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*p;

	i = 0;
	x = (unsigned char)c;
	p = (unsigned char*)s;
	while (i < (len - 1))
	{
		if (p[i] == x)
			return ((void*)s + i);
		i++;
	}
	if (p[i] == x && i < len)
		return ((void*)s + i);
	return (0);
}
