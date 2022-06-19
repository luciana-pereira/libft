/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 13:15:25 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:38:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Aplica a função f a cada caractere da string s, e passando seu indice
como primeiro argumento para criar uma nova string com malloc resultando de sucessivas
aplicações de f como delimitador. A matriz deve terminar com um ponteiro NULL.

Parametros: s ea string a qual inteirar e f a função a se aplicada a cada caractere.

Valor de retorno: A string criada apartir dos sucessivos aplicativos fora e NULL
se a alocação falhar.
*/

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	size_t i;

	if (!s || !f)
	{
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char my_func(unsigned int i, char str)
// {
// 	printf("Minha função interna: index = %d e %c\n", i, str);
// 	return str - 32;
// }

// int main()
// {
// 	char const s[] = "passei";
// 	char *res = ft_strmapi(s, my_func);

// 	printf("Result | %s\n", s);
// 	printf("Result | %s\n", res);
// 	return (0);

// }