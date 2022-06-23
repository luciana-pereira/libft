/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:55:12 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/07 02:23:49 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Essas funções convertem letras minusculas em maiusculas.

Valor de retorno: O valor retornado é o da letra covertida, ou c se a conversão
não foi possível.
*/

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
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
// 		putchar (tolower(str[i]));
// 		//putchar (ft_toupper(str[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }