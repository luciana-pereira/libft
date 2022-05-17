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
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
	{
		return (dest);
	}
	if (src < dest)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		return (dest);
	}
	ft_memcpy(d, s, n);
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