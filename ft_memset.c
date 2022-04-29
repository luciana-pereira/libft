/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:42:47 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:28 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		*(unsigned char*)(s) = (unsigned char)c;
		i++;
		s++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[60];

// 	strcpy(str, "Passeeeeeeeeeeeeiii");
// 	puts(str);

// 	ft_memset(str, 'X', 7);
// 	puts(str);

// 	return (0);
// }
