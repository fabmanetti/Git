/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:02:34 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/21 16:03:45 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_putnbr_fd(0, 2);
	else if (arg == 2)
		ft_putnbr_fd(5, 1);
	else if (arg == 3)
		ft_putnbr_fd(-5, 2);
	else if (arg == 4)
		ft_putnbr_fd(42, 1);
	else if (arg == 5)
		ft_putnbr_fd(-57, 2);
	else if (arg == 6)
		ft_putnbr_fd(164189, 1);
	else if (arg == 7)
		ft_putnbr_fd(-987441, 2);
	else if (arg == 8)
		ft_putnbr_fd(2147483647, 1);
	else if (arg == 9)
		ft_putnbr_fd(-2147483648LL, 2);
	return (0);
}
