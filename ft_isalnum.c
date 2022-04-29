/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:26:24 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:33:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char c;
// 	int result;

// 	c = '-';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");
	
// 	c = '7';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");

// 	c = '7';
// 	result = isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");

// 	c = 'A';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");
// 	return (0);
// }
