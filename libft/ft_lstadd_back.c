/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 19:25:03 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/25 20:59:37 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*actual;

	if (!alst || !new)
		return ;
	actual = *alst;
	if (*alst == (void *)0)
	{
		actual->next = new;
		return ;
	}
	while (actual->next != NULL)
	{
		actual = actual->next;
	}
	actual->next = new;
}
