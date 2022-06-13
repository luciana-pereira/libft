/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:53:20 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/20 15:36:20 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função strchr retorna um ponteiro para a primeira ocorrência do
caractere c na string s ou NULL caso não encontre.

Valor de retorno: Retorna um ponteiro para o caractere correspondente ou NULL
se o caractere não for encontrado.

Parâmetro: s ea string para ser recuperada c e o c o caractere a ser procurado em s.
*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	if (c > 127)
	{
		c %= 256;
	}
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>

// int	main()
// {
// 	const char s[] = "Passei";
// 	const char c = 's';
// 	char *ret;
// 	char *re;

// 	ret = strchr(s, c);
// 	re = ft_strchr(s, c);

// 	printf("%c | Result | %s\n", c, ret);
// 	printf("%c | Result | %s\n", c, re);

// 	return (0);
// }