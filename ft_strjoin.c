/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 04:33:32 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:37:56 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Aloca (com malloc(3)) e retorna uma nova string, que e o resultado da concatenação de s1 e s2.
Parametros: s1 a sequência de prefixo e s2 a cadeia de sufixo.
Valor de retorno: Retorna uma nova string ou NULL se a alocação falhar.
*/
#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	c;
	char	*s;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	i = 0;
	c = 0;
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		s[i] = s2[c];
		i++;
		c++;
	}
	s[i] = '\0';
	return (s);
	// free(s); Colocar para liberar memoria para teste.
}

// int main()
// {
// 	char const s1[] = "Sou";
// 	char const s2[] = " Cadete";

// 	printf("Result | %s\n", ft_strjoin(s1, s2));

// 	return (0);
// }
