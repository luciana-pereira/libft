/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:15:25 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:38:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int	c;
	int	i;
	
	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!s || !str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
	// free(str);
}

// char my_func(unsigned int i, char str)
// {
// 	printf("Minha função interna: index = %d e %c\n", i, str);
// 	return str - 32;
// }

// int main()
// {
// 	char const s[] = "passei";
// 	char *res = ft_strmapi(s, my_func);

// 	printf("Result | %s\n", s);
// 	printf("Result | %s\n", res);
// 	return (0);

// }