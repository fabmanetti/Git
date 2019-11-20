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
	while (s[x] != '\0')
	{
		if (s[x] != c)
		{
		printf("0");
			while (s[x] != c && s[x] != '\0')
				x++;
			y++;
		}
		if (s[x] == '\0')
			x++;
	}
	//if (y != 0)
	//	y++;
	//printf("%d\n", y);
	return (y);
}

char	*fill_array(const char *s, char c, char *t, int x)
{
	int		y;
	int		z;
	int		a;

	a = x;
	y = x;
	z = 0;
	while (s[y] != c && s[y] != '\0')
		a++;
	if(!(t = malloc(((a - x) + 2) * sizeof(char))))
		return (0);
	while (z < (a - x) && s[y] != '\0')
	{
		t[z] = s[y];
		z++;
		y++;
		printf("2");
	}
	t[z] = '\0';
	return (t);
}

int		advancec(const char *s, char c, int x)
{
	while (s[x] == c)
		x++;
	printf("3");
	return (x);
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
		printf("1");
		t[x] = fill_array(s, c, t[x], y);
		if (x != words)
			y = advancec(s, c, y);
		y++;
		x++;
	}
	t[x] = NULL;
	return (t);
}
