/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:26:24 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:33:24 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Essas funções verificam se c, que deve ter o valor de um unsigned char
ou EOF, se enquada em uma determinada classe de caractere de acordo com a localidade
especificada. Ou sdeja se é um caracter alfanumerico, é equivalente a (isalpha(c) || 
isdigit(c)).

Valor de retorno: Os valores retornados são diferentes de zero se o caractere c se enquada
na classe testada e zero se não.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char c;
// 	int result;

// 	c = '-';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");
	
// 	c = '7';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");

// 	c = '7';
// 	result = isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");

// 	c = 'A';
// 	result = ft_isalnum(c);
// 	printf("%cResult %d", c, result);
// 	printf("\n");
// 	return (0);
// }
