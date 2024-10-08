/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-rio <ddel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 02:53:17 by ddel-rio          #+#    #+#             */
/*   Updated: 2024/10/08 03:57:36 by ddel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i <= n)
    {
        ()s[i] = c;
        i++;
    }
        
	return s;
}
int	main(void)
{
    memset("Hola soy Ernesto", 0, 0);
	return (0);
}
