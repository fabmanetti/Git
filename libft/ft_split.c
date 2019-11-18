/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 17:50:16 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/18 14:29:31 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, char c)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x++;
		i++;
	}
	return (x);
}

char	*fill_array(const char *s, char *t, char c, int y)
{
	int		i;
	int		x;

	i = y;
	x = 0;
	i++;
	while (s[i] != c && s[i] != '\0')
		i++;
	if (!(t = malloc(((i - y) + 1) * sizeof(char))))
		return (0);
	while (s[y] != '\0')
	{
		t[x] = s[y];
		x++;
		y++;
		if (s[y] == c)
		{
			t[x] = '\0';
			return (t);
		}
	}
	return (t);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**t;

	i = 0;
	y = 0;
	t = NULL;
	x = count_words(s, c);
	if (!(t = malloc((x + 1) * sizeof(char*))))
		return (0);
	while (i < x)
	{
		t[i] = fill_array(s, t[i], c, y);
		y++;
		while (s[y] != c)
			y++;
		i++;
	}
	t[i] = 0;
	return (t);
}
