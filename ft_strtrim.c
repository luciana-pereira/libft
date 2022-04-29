/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:44:14 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/25 21:40:48 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	
	if (!s1 || !set)
	{
		return (NULL);
	}
	s = 0;
	while (s1[s] && ft_strchr(set, s1[s]))
	{
		s++;
	}
	e = ft_strlen(s1) + 1;
	while (e > s && ft_strchr(set, s1[e - 1]))
	{
		e--;
	}
	return (ft_substr(s1, s, (e - s)));
}

// int main()
// {
// 	char const s1[] = "Passou no teste";
// 	char const r[] = "s";

// 	printf("Result | %s\n", ft_strtrim(s1, r));

// 	return (0); 
// }