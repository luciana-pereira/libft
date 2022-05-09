/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 02:30:35 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 06:31:08 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função strnstr() localiza a primeira ocorrência da string terminada 
em null litle na string big, onde não mais do que len caracteres são pesquisados. 
Os acaracteres que aparecem após um caractere '\0' não são pesquisados.

Valor de Retorno: Se little for uma string vazia, big será retornado, se tittle 
ocorre em nenhum lugar em big, NULL é retornado, caso contrario, um ponteiro para o 
primeiro caractere da primeira ocorrência de little é retornado.
*/
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t s;

	i = 0;
	if (!*little)
	{
		return ((char *)big);
	}
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			s = 1;
			while (big[i + s] == little[s] && little[s] != '\0' && i + s < len)
			{
				s++;
			}
			if (little[s] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
//     const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Bar";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 5);
	
// 	printf("result: %s\n", ptr);
// 	// printf("result: %d\n", strnstr(largestring, smallstring, 4));

	
// 	return (0);
// }
