/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:11:49 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 03:55:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char c;

// 	c = '-';
// 	printf("Result %d", ft_isdigit(c));
// 	printf("\n");
// 	c = '7';
// 	printf("Result %d", isdigit(c));
// 	printf("\n");
// 	return (0);
// }