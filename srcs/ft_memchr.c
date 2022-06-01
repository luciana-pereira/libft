/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:43:01 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 03:43:31 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função memchr() varre n bytes iniciais da área de memória apontada
por s para a primeira instância de c. Tanto c quanto os bytes da área de memória 
apontados por s são interpretados como caracteres sem sinal.

Parâmetros:s aponta para o bloco de memória para realizar a pesquisa, c e o valor 
int passado, mas a função de cada busca de bytes usando os valores de char não assinados.
e n o numero de bytes a serem analisados.

Valor de retorno: Retorna um ponteiro para o byte correspondente ou NULL se o caractere
não ocorrer na area de memoria especificada.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
	{   
		if (*str == (unsigned char)c)
		{
			return ((void *)str);
		}
		str++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	const char s[] = "Passei no teste meu povo.";
// 	const char c = 's';
// 	char *ret;

// 	ret = ft_memchr(s, c, strlen(s));
	
// 	printf("%c - Result - %s \n", c, ret);
	
// 	return(0);
// }
