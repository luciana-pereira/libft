/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 19:31:04 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 20:47:56 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Emite o caractere c para o arquivo fornecido descritor.

Valor de Retorno: Nenhum.

Parametros: c o caracter a ser gerado e fd o descritor de arquivo no qual escrever.

Função externa: write.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main ()
// {
// 	char l = 'A';
// 	ft_putchar_fd(l, 2);
// 	return (0);
// }