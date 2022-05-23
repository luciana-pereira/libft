/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 15:58:56 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/27 16:17:36 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Adiciona o nó 'novo' no inicio da lista.

Valor de retorno: Nenhum.

Parametro: lst e o endereço de um ponteiro para o primeiro link de uma lista e
new e o endereço de um ponteiro para o nó a ser adicionado á lista.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
