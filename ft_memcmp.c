/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 04:00:28 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:35:45 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char *str2;
	size_t	i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if	(str1[i] != str2[i])
		{
			return	(str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[10];
// 	char str2[10];
// 	int ret;

// 	memcpy(str1, "abcdef", 6);
// 	memcpy(str2, "ABCDEF", 6);

// 	ret = ft_memcmp(str1, str2, 5);

// 	if(ret > 0)
// 	{
// 		printf("str2 e menor que str1");
// 	}
// 	else if(ret > 0)
// 	{
// 		printf("str1 e menor que str2");
// 	}
// 	else
// 	{
// 		printf("str1 e igual str2");
// 	}
// 	return (0);
// }