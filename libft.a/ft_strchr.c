/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:26:03 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/06 18:07:00 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strchr(const char *s, int c)
{
	int i;
	char d;
	char *p;

	d = (char)c;
	i = 0;
	p = 0;
	while (s[i] != d || s[i] != '\0')
		i++;
	if (s[i] == d)
	{
		*p = s[i];
		return p;
	}
	else
		return (0);
}
