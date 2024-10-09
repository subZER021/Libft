/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-rio <ddel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 01:33:56 by ddel-rio          #+#    #+#             */
/*   Updated: 2024/10/10 01:39:19 by ddel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*d;
	char	*p;
	size_t	i;

	p = (char *)s1;
	i = 0;
	d = (char *)malloc(ft_strlen(p) + 1);
	if (d == NULL)
		return (NULL);
	while (p[i] != '\0')
	{
		d[i] = p[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
