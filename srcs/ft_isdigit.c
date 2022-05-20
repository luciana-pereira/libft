/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:11:49 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 03:55:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Essas funções verificam se c, que deve ter o valor de um unsigned char
ou EOF se enquadra em uma classe determinada de caractere de acordo com a localidade 
especificada.

Valor de retorno: Os valores de retornados são diferentes de zero se o caractere c
se enquadra na classe testada e zero se não.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char c;

// 	c = '-';
// 	printf("Result %d", ft_isdigit(c));
// 	printf("\n");
// 	c = '7';
// 	printf("Result %d", isdigit(c));
// 	printf("\n");
// 	return (0);
// }