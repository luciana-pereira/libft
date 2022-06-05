/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:42:47 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:28 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função memset preenche os primeiros n bytes da área de mémoria apontada
por s com o byte constante c.

Valor de retorno: Retorna um ponteiro para a área de memória s.

Parâmetros: str e um ponto para preencher o bloco de memória, c o valor a ser definido.
Esse valor e passado como un int, mas a função quando o bloco de memória é preenchido 
usando os valores de unsigned char e n o numero de bytes a ser definido para esse valor.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)(s);
	while (n--)
	{
		*str = (unsigned char)c;
		str++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str[60];

// 	strcpy(str, "Passeeeeeeeeeeeeiii");
// 	puts(str);

// 	ft_memset(str, 'X', 7);
// 	puts(str);

// 	return (0);
// }
