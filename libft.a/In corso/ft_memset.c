/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:26:35 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/05 18:42:39 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *ptr, int c, int len)
{
	unsigned char x;
	x = (unsigned char) c;
	int i;
	int a;

	i = 0;
	while (i < len)
	{
		ptr = x;
		i++;
	}
}
