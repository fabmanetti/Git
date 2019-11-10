
#include "libft.h"

char*	ft_strnstr(const char *s1, const char *s2, unsigned int len)
{
	unsigned int x;
	unsigned int y;
	unsigned int z;
	unsigned int c;

	x = 0;
	z = 0;
	c = ft_strlen(s2);
	len = 0;
	while (s2[x] != '\0' && z != c)
	{
		y = 0;
		while (s1[y] != '\0')
		{
			if (s2[x] == s1[y])
			{
				x++;
				z++;
			}
			y++;
		}
		x++;
	}
	if (s2[y + 1] == '\0')
		return ((char*)s2 + x - (y + 1));
	else if (s1[x] == '\0' || s2[x] == '\0')
		return (0);
	else 
		return ((char*)s1);
}