/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 21:51:12 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/27 22:34:09 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Toma como parâmetro um nó e libera a memória do conteúdo do nó usando a 
função 'del' dada como parâmetro e libera o nó. A memória do 'next' não deve ser liberada.

Parametros: lst e o nó para libertar e del o endereço da função usada para excluir o conteúdo.

Valor de retorno: Nenhum.

Função externa: Free.
*/

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
