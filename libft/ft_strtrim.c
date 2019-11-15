/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:13:29 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/15 17:47:21 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		x;
	int		y;
	int		z;
	char	*s2;

	x = 0;
	y = 0;
	z = 0;
	while (s1[x] == set[x])
		x++;
	while (s1[ft_strlen(s1) - ft_strlen(set) + y] == set[y])
		y++;
	if (!(s2 = (char*)malloc((ft_strlen(s1) - x - y) * sizeof(char))))
		return (NULL);
	while (s1[x] != '\0' && x <= (ft_strlen(s1) - y))
	{
		s2[z] = s1[x];
		z++;
		x++;
	}
	s2[z] = '\0';
	return (s2);
}
