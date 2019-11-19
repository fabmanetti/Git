/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:29 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/18 20:26:30 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		front_check(char const *s1, char const *set)
{
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (s1[x] != '\0' && x <= ft_strlen(set))
	{
		if (s1[x] == set[y])
			y++;
		if (s1[x] == ' ')
			z++;
		x++;
	}
	return (y + z);
}

int		back_check(char const *s1, char const *set)
{
	int		x;
	int		y;
	int		z;

	x = ft_strlen(s1) - 1;
	y = ft_strlen(set) - 1;
	z = 0;
	while (s1[x] != '\0' && x >= (ft_strlen(s1) - ft_strlen(set)))
	{
		if (s1[x] == set[y])
		{
			x = ft_strlen(s1);
			y--;
			z++;
		}
		if (s1[x] == ' ')
			z++;
		x--;
	}
	return (z);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		y;
	int		z;
	char	*s2;

	x = front_check(s1, set);
	y = back_check(s1, set);
	z = 0;
	if (!(s2 = malloc((ft_strlen(s1) - x - y + 1) * sizeof(char))))
		return (0);
	while (z < (ft_strlen(s1) - y))
	{
		s2[z] = s1[z + x];
		z++;
	}
	s2[z] = '\0';
	return (s2);
}
