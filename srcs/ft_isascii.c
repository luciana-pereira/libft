/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:51:45 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:34:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Essa função verifica se c, que deve ter o valor de um unsignedd char ou EOF,
se enquadra em uma determinada classe de caractere de acordo com a localidade especificada.
Ou seja, verifica se c está entre 0 e 127 em decimal na tabela ASCII.

Valor de retorno: Os valores retornados são diferentes de zero se o caractere c se enquadra 
na classe testada e zero se não.
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	char c;

// 	c = '*';
// 	printf("Result %d", ft_isascii(c));
// 	printf("\n");

// 	printf("Result %d", isascii(c));
// 	printf("\n");

// 	return (0);
// }