/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:17:34 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 14:23:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função strdup retorna um ponteiro para uma nova string que é uma
duplicata da string s. A memória para a nova string é obtida com malloc, e pode
ser liberada com free.

Valor de retorno: Em caso de sucesso, a função strdup retorna um ponteiro para a
string duplicada. Ele retorna NULL se memória insuficiente estiver disponivel, com
errno definido para indicar a causa do erro.
*/

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s, (ft_strlen(s) + 1));
	return (str);
}

// int main()
// {
// 	char s[] = "Passei no teste.";

// 	printf("Result | %s\n", ft_strdup(s));
// 	return (0);
// }