/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-rio <ddel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 23:26:04 by ddel-rio          #+#    #+#             */
/*   Updated: 2024/09/25 23:39:52 by ddel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
        return(1);
return(0);    
}
// int main ()
// {
//     int c = 8;
//     int k = 'A';
//     printf("%d\n", ft_isalnum(c));
//     printf("%d\n", ft_isalnum(k));
//     return(0);
// }