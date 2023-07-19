/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:38:33 by lucperei          #+#    #+#             */
/*   Updated: 2023/07/19 19:44:55 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Função que copia 'n' caracteres da string 'src' para a string 'dest'
// ou até encontrar um caractere nulo em 'src'.
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;
	
	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	// Se a string 'src' for menor do que 'n', preenche o restante de 'dest' 
	// com caracteres nulos.
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
