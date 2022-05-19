/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:37:26 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 20:48:59 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Adiciona o node(nó) novo no final da lista.

Parametro: lst e o endereço de um ponteiro para o primeiro link de uma lista e 
new e o endereço de um ponteiro para o node a ser adicionado á lista.

Valor de retorno: Nenhum(none).

Função externa: Nenhum(none).
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst != NULL && *lst != NULL)
	{
		tmp = *lst;
		tmp = ft_lstlast(*lst);
		tmp->next = new;
		return ;
	}
	*lst = new;
}
