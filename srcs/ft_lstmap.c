/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 01:16:56 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 18:22:04 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição:Itera a lista 'lst' e aplica a função 'f' no conteudo de cada nó. Cria
uma nova lista resultante das sucessivas aplicações da função 'f'. A função 'del'
é usada para excluir o conteúdo de um nó, se necessáio.

Parametros: lst e o endereço de um ponteiro para um nó, o f e o endereço da função
usada para iterar na lista, e o del o endereço da função usada para excluir o con-
teudo de um nó, se necessario.

Valor de retorno: A nova lista ou NULL se a alocação falhar.

Funçã externa: malloc e free.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list *tmp;

	new = NULL;
	if (!lst)
	{
		return (NULL);
	}
	while (lst)
	{
		
		if(!(tmp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
