/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 23:04:38 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/27 23:26:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Toma como parametro um nó e libera a memória do conteudo do nó usando
a função 'del' dada como parametro e libera o nó. A memoria do 'next' não deve ser liberada.

Parametro: lst e o endereço de um ponteiro para um nó e del e o endereço da função usada
para excluir o conteudo do nó.

Valor de retorno: Nenhum (none).

Função externa: free.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (* del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
