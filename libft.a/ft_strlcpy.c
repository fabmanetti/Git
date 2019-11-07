/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:50:21 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/07 16:25:01 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_strlcpy(char *dst, const char *src, int size)
{
	int i;

	i = 0;
	while (dst[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
