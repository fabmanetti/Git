/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:50:16 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/19 21:42:19 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, char c)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s[x])
	{
		if (s[x] == c)
			y++;
		x++;
	}
	return (y);
}

char	*fill_array(const char *s, char c, char *t, int x)
{
	int		y;
	int		z;

	y = x;
	z = 0;
	while (s[x] != c)
		x++;
	if(!(t = malloc((x + 2) * sizeof(char))))
		return (0);
	while (z <= x && s[y] != '\0')
	{
		t[z] = s[y];
		z++;
		y++;
	}
	t[z] = '\0';
	return (t);
}

char	**ft_split(const char *s, char c)
{
	int		x;
	int		y;
	int		z;
	int		words;
	char	**t;

	x = 0;
	y = 0;
	z = 0;
	words = count_words(s, c);
	if (!(t = malloc((words + 1) * sizeof(char*))))
		return (0);
	while (x < words)
	{
		t[x] = fill_array(s, c, t[x], y);
		if (x != words)
			while (s[y] != c && s[y] != '\0')
				y++;
		x++;
		y++;
	}
	t[x] = NULL;
	return (t);
}
