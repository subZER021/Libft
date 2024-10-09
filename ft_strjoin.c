/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-rio <ddel-rio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 01:34:08 by ddel-rio          #+#    #+#             */
/*   Updated: 2024/10/10 01:39:25 by ddel-rio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sfinal;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sfinal = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!sfinal)
		return (NULL);
	ft_strlcpy(sfinal, s1, len1 + 1);
	ft_strlcat(sfinal, s2, len1 + len2 + 1);
	return (sfinal);
}
