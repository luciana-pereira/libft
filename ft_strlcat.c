/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:24:13 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 04:18:19 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t l;
	
	l = ft_strlen(dst);
	if (size <= l)
	{
		return (size + ft_strlen(src));
	}
	i = 0;
	while (src[i] && (i + l ) < (size -1))
	{
		dst[i + l] = src[i];
		i++;
	}
	dst[i + l] = 0;
	return (l + ft_strlen(src));
}

// int main()
// {
// 	char 	s1[] = "Exemplo 1.";
// 	char	s2[] = "Exemplo 2.";

// 	ft_strlcat(s1, s2, 3);
// 	printf("String: %s\n", s1);
// 	return (0);
// }