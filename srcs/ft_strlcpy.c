/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:23:22 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:38:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição:A função cópia e concatena strings respectivamente, ela retorna o
comprimento total da string. O conteudo da string src e copiada para buffer dst.

Valor de retorno: Retorna o comprimento de src.
*/

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t c;

	i = 0;
	c = ft_strlen(src);
	if (size < 1)
	{
		return (c);
	}
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}

// int main()
// {
// 	char dst[20];
// 	char *src = "Passei no teste!";
// 	int size;

// 	size = 6;
// 	// printf("Com strlcpy | %u\n", strlcpy(dst, src, size));
// 	printf("dest -> %s\n", dst);
// 	printf("Com ft_strlcpy | %ld\n", ft_strlcpy(dst, src, size));
// 	printf("dest -> %s\n\n", dst);
// 	return (0);
// }