/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:34:37 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/12 15:42:24 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char*)dst;
	p2 = (char*)src;
	if (src < dst)
	{
		i = (len - 1);
		while (i >= 0)
		{
			p1[i] = p2[i];
			i--;
		}
	}
	else
	{
		while (len--)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (dst);
}
