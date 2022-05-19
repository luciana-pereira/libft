/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:16:09 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:34:35 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126 );
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char c;

// 	c = '\0';
// 	printf("Result %d", ft_isprint(c));
// 	printf("\n");
// 	c = '+';
// 	printf("Result %d", isprint(c));
// 	printf("\n");
// 	return (0);
// }