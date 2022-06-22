/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:15:37 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 23:20:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Descrição: Aloca e retorna uma substring da string s. A substring começa no indice
start e e de tamanho maximo len.

Parâmetro: s e a string a partir da qual cria a substring, start o indice inicial
da substring na string s e len o comprimento máximo da substring.

Valor de retorno: A substring ou NULL se a alocação falhar.
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *substr;
	size_t c;

	i = 0;
	c = 0;
	if (!s)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
	{
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && c < len)
		{
			substr[c] = s[i];
			c++;
		}
		i++;
	}
	substr[c] = '\0';
	return (substr);
}
