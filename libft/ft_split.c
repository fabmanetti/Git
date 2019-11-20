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


int		count_word(char const *s, char c)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			while (s[x] == c && s[x] != '\0')
				x++;
		else
		{
			while (s[x] != c && s[x] != '\0')
				x++;
			y++;
		}
	}
	return (y);
}

//void	free_all(char **t)
//{
//	return ;
//}

char	*fill_string(char const *s, char c, char *t, int y)
{
	int		x;
	int		z;
	int		a;

	x = y;
	a = y;
	z = 0;
	if (s[y] == c)
		x++;
	while (s[x] != c && s[x] != '\0')
		x++;
	if (!(t = malloc((x - y + 1) * sizeof(char))))
		return (0);
	while (z < (x - y) && s[a] != '\0')
	{
		t[z] = s[a];
		z++;
		a++;
	}
	t[z] = '\0';
	printf("%s\n", t);
	return (t);
}

int		set_y(char const *s, char c, int y)
{
	int		x;
	int		z;

	x = 0;
	z = 0;
while (s[y] != '\0')
	{
		if (s[y] == c)
			while (s[y] == c && s[y] != '\0')
				y++;
		else
		{
			while (s[x] != c && s[x] != '\0')
				y++;
			x++;
		}
	}


}

char	**ft_split(char const *s, char c)
{
	int		x;
	int		y;
	int		wrd;
	char	**t;

	x = 0;
	y = 0;
	t = NULL;
	wrd = count_word(s, c);
	if (!(t = malloc((wrd + 1) * sizeof(char*))))
		return (0);
	while (x < wrd)
	{
		t[x] = fill_string(s, c, t[x], y);
		y++;
		while (s[y] == c && s[y] != '\0')
			y++;
		while (s[y] != c && s[y] != '\0')
			y++;
		x++;
	}
	t[x] = NULL;
	return(t);
}

