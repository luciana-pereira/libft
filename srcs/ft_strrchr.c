/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 01:14:21 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:40:31 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função strrchr retorna um ponteiro para a última ocorrência do caractere
c na string s ou NULL caso não encontre.

Valor de retorno: A função strrchr retorna um ponteiro para o caractere correspondente
ou NULL se o caractere não for encontrado.

Parâmetros: s e a string para ser recuperada c e o c e o caractere a ser procurado em s.
*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;

	if (c > 127)
	{
		c %= 256;
	}
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
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

// 	ret = strrchr(s, c);
// 	re = ft_strrchr(s, c);

// 	printf("%c | Result | %s\n", c, ret);
// 	printf("%c | Result | %s\n", c, re);

// 	return (0);
// }
