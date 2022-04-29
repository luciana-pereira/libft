/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 07:52:39 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 05:59:16 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	//	if (!p)

	if (nmemb > 65535 / size)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	//ft_bzero(p, nmemb * size)
	ft_memset(p, 0, nmemb * size);
	return (p);
	// free(p);
}

// int main ()
// {
// 	void *p;

// 	p = ft_calloc(2, 5);
// 	printf("Result | %p\n", p);
// 	return (0);
// }