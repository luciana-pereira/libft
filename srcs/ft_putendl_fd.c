/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:12:56 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/29 22:43:05 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Gera a string 's' para o descritor de arquivo fornecido, seguido por
uma nova linha.

Parâmetros: s a string para saida e fd o descritor de arquivo no qual escrever.

Valor de retorno:Nenhum(None).

Função externa:write.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
