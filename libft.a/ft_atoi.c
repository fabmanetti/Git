/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 13:40:12 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/11 19:15:26 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *s)
{
	int x;
	int res;
	int sign;

	x = 0;
	res = 0;
	while (s[x] == ' ' || (s[x] >= 8 && s[x] <= 13))
		x++;
	if (s[x] == '-')
		sign = 1;
	while (s[x] == '+' || s[x] == '-')
		x++;
	while (s[x] >= '0' && s[x] <= '9')
	{
		res *= 10;
		res += (int)s[x] - '0';
		x++;
	}
	if (sign == 1)
		return (-res);
	else
		return (res);
}
