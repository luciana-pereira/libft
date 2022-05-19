/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 02:06:42 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 07:32:58 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Converte a parte inicial da string apontada para int. Ou seja, converte uma string para um inteiro.

Parametro: s e a string a ser convertida em int.

Valor de retorno: Valor convertido.
*/

#include "libft.h"

int ft_atoi(const char *s)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while ((s[a] == '\t' || s[a] == '\f' || s[a] == '\n' 
			|| s[a] == '\v' || s[a] == '\r') || s[a] == ' ')
	{
		a++;
	}
	if (s[a] == '+' || s[a] == '-')
	{
		if (s[a] == '-')
		{
			b = -1;
		}
		a++;
	}
	while (s[a] >= '0' && s[a] <= '9')
	{
		c = (s[a] - '0') + (c * 10);
		a++;
	}
	return (c * b);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi( " ---+--+1234ab567"));//return -> -1234
// }