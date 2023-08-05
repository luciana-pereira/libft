/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 03:29:49 by lucperei          #+#    #+#             */
/*   Updated: 2023/06/09 14:13:27 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Essa função simplesmente verifica se o caractere fornecido é um dos caracteres de espaço em branco mencionados acima. 
//Se for, a função retorna 1. Caso contrário, ela retorna 0. 
int ft_isspace(int c) 
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v');
}
