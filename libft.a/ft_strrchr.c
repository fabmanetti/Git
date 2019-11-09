/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 10:44:38 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/07 12:22:17 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strrchr(const char *s, int c)
{
	int i;
	int d;
	char x;

	i = 0;
	d = 0;
	x = (char)c;
	while (s[i])
	{
		if (s[i] == x)
			d = i;
		i++;
	}
	if (d != 0)
		return((char*)&s[d]);
	return (0);
}