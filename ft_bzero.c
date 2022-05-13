/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 04:08:33 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 00:49:39 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: A função bzero() apaga os dados nos n bytes da memória começando no local
apontado por s, escrevendo zeros (bytes contendo '\0') nessa área.

**Se n for 0, bzero() não faz nada.

Valor de retorno: Nenhum (none).
*/

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = s;
	while (n > i)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char	s[] = "Passei no teste.";
	
// 	ft_bzero(s + 3, 1);
// 	printf("Result | %s\n", s);
// 	return (0);
// }