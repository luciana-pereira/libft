/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:17:24 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 20:25:39 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição:Retorna o último nó da lista.

Parametros:lst e o inicio da lista.

Valor de retorno:Ultimo nó da lista.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
		{
			return (lst);
			
		}
		lst = lst->next;
	}
	return (NULL);
}
