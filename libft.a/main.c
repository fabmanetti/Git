/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:32:30 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/05 20:58:08 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char *argv[])
{
	argc = 0;
	printf("%d\n", ft_tolower(argv[1][0]));
	printf("%d\n", tolower(argv[1][0]));
	return (0);
}
