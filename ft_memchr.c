/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:43:01 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 03:43:31 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*str;

	i = 0;
	str = (unsigned char const *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	const char s[] = "Passei no teste meu povo.";
// 	const char c = 's';
// 	char *ret;

// 	ret = ft_memchr(s, c, strlen(s));
	
// 	printf("%c - Result - %s \n", c, ret);
	
// 	return(0);
// }
