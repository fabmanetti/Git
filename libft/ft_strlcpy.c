/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:50:21 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/12 10:49:52 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (dst[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
