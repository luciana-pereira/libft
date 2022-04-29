/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:01:01 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:19 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
	{
		return (NULL);
	}
	if (dest > src)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
// 	char dest[] = "oldstring";
// 	const char src[] = "newstring";

// 	printf("Antes memmove dest = %s, src = %s\n", dest, src);
// 	memmove(dest, src, 3);
// 	printf("Depois memmove dest = %s, src = %s\n", dest, src);
// 	return (0);
// }