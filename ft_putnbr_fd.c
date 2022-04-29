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

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *nbr;
	size_t i;

	nbr = ft_itoa(n);
	i = ft_strlen(nbr);
	write(fd, nbr, i);
}

// int	main(void)
// {
// 	int a;
	
// 	a = -2147483648;
// 	ft_putnbr_fd(a, 1);
// }
