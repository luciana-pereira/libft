/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 04:00:28 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:35:45 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função memcmp() compara os primeiros n bytes (cada um interpretado 
como unsigned char) das areas de memorias s1 e s2.

Parâmetros: s1 aponta para um ponteiro de bloco de memoria, s2 aponta para um 
ponteiro de bloco de memoria e n e o numero de bytes a serem analisado.

Valor de retorno: A função retorna um numero inteiro menor, igual ou maior que 
zero se os primeiros n  bytes de s1 forem encontrados, respectivamente, menores que,
correspondentes ou maiores que os primeiros n bytes de s2.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[10];
// 	char str2[10];
// 	int ret;

// 	memcpy(str1, "abcdef", 6);
// 	memcpy(str2, "ABCDEF", 6);

// 	ret = ft_memcmp(str1, str2, 5);

// 	if(ret > 0)
// 	{
// 		printf("str2 e menor que str1");
// 	}
// 	else if(ret > 0)
// 	{
// 		printf("str1 e menor que str2");
// 	}
// 	else
// 	{
// 		printf("str1 e igual str2");
// 	}
// 	return (0);
// }