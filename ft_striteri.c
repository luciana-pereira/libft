/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:13:05 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:37:42 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	if (!s || !f)
	{
		return ;
	}
	i  = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void my_func(unsigned int i, char *str)
// {
// 	printf("Minha função interna: index = %d e %s\n", i, str);
// }

// int main()
// {
// 	char s[] = "passei";

// 	printf("Result | %s\n", s);
// 	ft_striteri(s, my_func);
// 	printf("Result | %s\n", s);
// 	return (0);

// }