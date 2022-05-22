/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 05:01:38 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/29 03:17:03 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Aloca (com malloc(3)) e retorna uma string representando o inteiro recebido
como argumento. Numeros negativos devem ser tratados.

Parametros: "n" o inteiro a ser convertido.

Valor de retorno: A string que representa o inteiro ou NULL se a alocação falhar.
*/

#include "libft.h"

static size_t	count(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = count(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	str[i--] = '\0';
	while (n)
	{
		str[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
