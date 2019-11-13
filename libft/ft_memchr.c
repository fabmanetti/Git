/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:47:19 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/12 17:19:11 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t len)
{
	int				i;
	unsigned char	x;
	unsigned char	*p;

	i = 0;
	x = (unsigned char)c;
	p = (unsigned char*)s;
	while (p[i] != '\0' && len--)
	{
		if (p[i] == x)
			return ((void*)s + i);
		i++;
	}
	return (0);
}
