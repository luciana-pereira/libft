/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:08:33 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 00:49:39 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char	s[] = "Passei no teste.";
	
// 	ft_bzero(s + 3, 1);
// 	printf("Result | %s\n", s);
// 	return (0);
// }