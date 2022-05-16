/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:52:39 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 05:59:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Função calloc() aloca memoria para um array de elementos nmemd de 
tamanho bytes cada e retorna um ponteiro para a memoria alocada. A memoria está
zerada. Se nmemb ou size for 0, calloc() retornara NULL ou um valor de ponteiro 
exclusivo que podera ser passado posteriormente com sucesso para free().

Valor de retorno: A função calloc() retorna um ponteiro para a memoria alocada,
que é adequadamente alinhada para qualquer tipo interno. Em caso de erro, essas 
funções retornaram NULL.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb * size > 2147483647)
	{
		return (NULL);
	}
	else if (nmemb > 2147483647 || size > 2147483647)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
	// free(ptr);
}

// int main ()
// {
// 	void *p;

// 	p = ft_calloc(2, 5);
// 	printf("Result | %p\n", p);
// 	return (0);
// }