/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:57:35 by fmanetti          #+#    #+#             */
/*   Updated: 2019/11/13 19:57:38 by fmanetti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *p;
    int i;
    
    i = 0;
    p = 0;
    while (count--)
    {
        p = malloc(size * 40);
        ft_memset( p, 0, size);
        if (p == NULL)
            return (0);  
    }
    return (p);
}
