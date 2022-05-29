/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 07:05:49 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/27 06:46:10 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Aloca com malloc e retorna um novo nó. A variavel membro 'content' é 
inicializada com o valor do parâmetro 'content'. A variável 'next' é inicializada 
como NULL.

Parametros: content e o conteudo com o qual criar o nó.

Valo do retorno:O novo nó.

Função externa:malloc.
*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
	{
		return (NULL);
	}
	new->content = content;
	new->next = NULL;
	return (new);
}
