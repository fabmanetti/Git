/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:58:04 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/19 18:08:09 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		x;

	if (!s)
		return ;
	x = ft_strlen(s);
	write(fd, s, x);
	write(fd, "\n", 1);
}