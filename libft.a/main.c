/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:32:30 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/08 18:42:47 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main(int argc, char**argv)
{
	argc = 0;
	printf("%ld\n", ft_strlcat(argv[1], argv[2], atoi(argv[3])));
	printf("%ld\n", strlcat(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
