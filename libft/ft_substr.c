/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:46:42 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/15 17:42:57 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s2;
	char		y;
	size_t		x;
	size_t		i;

	i = 0;
	x = 0;
	y = (char)start;
	if (!(s2 = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == y)
		{
			while (x < len)
			{
				s2[x] = s[x + i];
				x++;
			}
			s2[x] = '\0';
			return (s2);
		}
		i++;
	}
	return (NULL);
}
