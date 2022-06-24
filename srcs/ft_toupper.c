/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:31:58 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:41:22 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição Essa função converte letras minusculas e vice-versa.

Valor de retorno: O valor de retorno é o da letra covertida, ou c se a conversão
não foi possivel.
*/

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int i = 0;
// 	char str[] = "Passei sou CADETE";

// 	while (str[i])
// 	{
// 		putchar (toupper(str[i]));
// 		//putchar (ft_toupper(str[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
