/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 01:46:55 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:39:11 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função compara duas  strings s1 e s2. A localidade não e levada em
consideração.

Valor de retorno: Retorna um numero inteiro menor, igual ou maior que zero  se s1
for encontrado, respectivamente, menor que, igualar ou maior que s2.

Parametros: s1 e o primeiro texto a ser comparado, s2 compara a segunda string
e n e o numero maximo de caracteres para comparar.
*/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char s1[15];
// 	char s2[15];
// 	//int ret;
// 	int re;

// 	strcpy(s1, "passei");
// 	strcpy(s2, "PASSEI");

// 	//ret = strncmp(s1, s2, 4);
// 	re = ft_strncmp(s1, s2, 4);

// 	if (re < 0)
// 	{
// 		printf("s1 s2\n");
// 	}
// 	else if (re > 0)
// 	{
// 		printf("s2 s1\n");
// 	}
// 	else
// 	{
// 		printf("s1 s2\n");
// 	}
// 	return (0);
// }
