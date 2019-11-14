/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afreire- <afreire-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:50:43 by afreire-          #+#    #+#             */
/*   Updated: 2019/11/14 19:06:09 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*space;
	size_t	i;

	i = 0;
	if (!(space = malloc(sizeof(char) * (nmemb * size))))
		return (NULL);
	while (i < size * nmemb)
	{
		space[i] = 0;
		i++;
	}
	return (space);
}
