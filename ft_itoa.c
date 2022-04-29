/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 05:01:38 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/29 03:17:03 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count(int n)
{
	int	i;
	
	i = 1;
	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i);
} 

static int negative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

static int	number(int c)
{
	return (c + '0');
}

char	*ft_itoa(int n)
{
	char	*p;
	int	i;
	int	g;
	
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n == 0)
	{
		return (ft_strdup("0"));
	}
	g = negative(n);
	if (g)
	{
		n = -n;
	}
	i = count(n) + g;
	p = malloc(sizeof(char) * (i + 1));
	if (!p)
	{
		return (NULL);
	}
	p[i] = '\0';
	if (g)
	{
		p[0] = '-';
	}
	while (i-- > g)
	{
		p[i] = number(n % 10);
		n /= 10;
	}
	return (p);
}
