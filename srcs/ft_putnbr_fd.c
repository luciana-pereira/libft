/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:24:18 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/29 03:26:33 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Descrição: Gera a string 'n' para o arquivo fornecido descritor.

Parametros: n e o inteiro a ser gerado e fd o descritor dearquivo no qual escrever.

Função externa: write
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n != -2147483648)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
		{
			ft_putchar_fd((n + '0'), fd);
		}
	}
	else
	{
		ft_putstr_fd("-2147483648", fd);
	}
}


// int	main(void)
// {
// 	int a;
	
// 	a = -2147483648;
// 	ft_putnbr_fd(a, 1);
// }
