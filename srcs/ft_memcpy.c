/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 02:10:28 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:36:09 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char	dest[] = "Passei";
// 	char	src[] = "Teste";
// 	int n = 4;
	
// 	// ft_memcpy(dest, src, sizeof(src));
// 	ft_memcpy(dest, src, n);
// 	printf("Copiado n (caracteres) = %d de src:%s para dest -> Result | %s\n", n, src, dest);
// 	return (0);
// }