/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:32:30 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/07 14:34:24 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(int argc, char**argv)
{
	argc = 0;
	printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
	printf("%d\n", strncmp(argv[1], argv[2], 4));
	return (0);
}
