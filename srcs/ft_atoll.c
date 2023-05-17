/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 02:11:01 by lucperei          #+#    #+#             */
/*   Updated: 2023/05/14 05:58:28 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// converte uma string em um número long long int.
long long int	ft_atoll(const char *str)
{
	long long int	result;
	int				sign;
	int				index;

	result = 0;
	sign = 1;
	index = 0;
	while (str[index] == ' ')
		index++;
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while (ft_isdigit(str[index]))
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}	
	return (result * sign);
}
