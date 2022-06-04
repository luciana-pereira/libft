/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 03:01:01 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:19 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função memmove() cópia n bytes da área de memória src para area de 
memória dest. As areas de memória podem se sobrepor: a cópia ocorre como se os 
bytes em src fossem copiados primeiro em um array temporário que não se sobreponha 
a src ou dest, e os bytes são então copiados do array temporário para dest.

Valor de retorno: Retorna um ponteiro para dest, ou seja, esta função retorna um 
ponteiro para o ponteiro dest armazenamento de destino.

Parâmetros: *dest e o ponto para a matriz destino para armazenar o conteúdo copiado, 
conversão de tipo para void ponteiros*, *src apontado para copiar a fonte de dados, 
conversão de tipo para void ponteiros* e n o numero de bytes a serem copiados.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == src)
	{
		return (dest);
	}
	if (src < dest)
	{
		while (n--)
		{
			d[n] = s[n];
		}
		return (dest);
	}
	ft_memcpy(d, s, n);
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
// 	char dest[] = "oldstring";
// 	const char src[] = "newstring";

// 	printf("Antes memmove dest = %s, src = %s\n", dest, src);
// 	memmove(dest, src, 3);
// 	printf("Depois memmove dest = %s, src = %s\n", dest, src);
// 	return (0);
// }