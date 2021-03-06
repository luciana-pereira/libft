/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:44:14 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:40:48 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Aloca (com malloc(3)) e retorna uma cópia de s1 com os caracteres especificados
em set removidos desde o início e o fim da corda.

Parametros: s1 e a string a ser cortada e set o conjunto de referência de caracteres a 
serem aparados.

Valor de retorno: A string cortada ou NULL se alocação falhar.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	if (!s1 || !set)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	str = ft_substr((char *)s1, 0, (i + 1));
	return (str);
}

// int main()
// {
// 	char const s1[] = "Passou no teste";
// 	char const r[] = "s";

// 	printf("Result | %s\n", ft_strtrim(s1, r));

// 	return (0); 
// }