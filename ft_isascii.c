/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:45 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:34:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	char c;

// 	c = '*';
// 	printf("Result %d", ft_isascii(c));
// 	printf("\n");

// 	printf("Result %d", isascii(c));
// 	printf("\n");

// 	return (0);
// }