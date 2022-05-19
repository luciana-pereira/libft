/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 02:07:29 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 03:51:42 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Description: A função verifica se c, que deve ter o valor de unsigned char ou EOF,
se enquadra em uma determinada classe de caractere de acordo com a localidade especificada.
Ou seja, verifica se e um caracter alfabetico, na localidade padrão c, equivalente a 
(issuper(c) || islower(c)).

Valor de retorno: Os valores retornados são diferentes de zero se o caracter c se 
enquadra na classe testada e zero se não.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	char c;
	
// 	c = ' ';
// 	printf("Resultado%d", ft_isalpha(c));
// 	printf("\n");
	
// 	c = 'A';
// 	printf("Resultado%d", isalpha(c));
// 	printf("\n");
	
// 	return (0);
// }