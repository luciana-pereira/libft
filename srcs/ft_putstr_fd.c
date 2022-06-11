/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:29:49 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:54 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Gera a string s para o descritor de arquivo fornecido.

Parametros: s e a stirng para a saida e fd o descritor no qual escrever.
*/

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int	i;
	
	if (!s)
	{
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
