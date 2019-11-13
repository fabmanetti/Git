/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:26:35 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/12 10:55:45 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, int len)
{
	int				i;
	char			x;
	unsigned char	*p;

	i = 0;
	p = 0;
	x = (char)c;
	p = (unsigned char*)s;
	while (len--)
	{
		p[i] = x;
		i++;
	}
	return (s);
}
