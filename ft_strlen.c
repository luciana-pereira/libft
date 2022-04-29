/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:28:57 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/20 15:56:11 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char a[20] = "Passei";
// 	char b[20] = {'P', 'a', 's', 's', 'e', 'i', '\0'};

// 	printf("Comprimento %zu \n", strlen(a));
// 	printf("Comprimento %zu \n", strlen(b));
// 	printf("Comprimento %zu \n", ft_strlen(a));
// 	printf("Comprimento %zu \n", ft_strlen(b));

// 	return (0);
// }
