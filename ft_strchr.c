/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 23:53:20 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/20 15:36:20 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c > 127)
	{
		c %= 256;
	}
	while (*s != c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}

// #include <stdio.h>
// #include <string.h>
// #include <stddef.h>

// int	main()
// {
// 	const char s[] = "Passei";
// 	const char c = 's';
// 	char *ret;
// 	char *re;
	
// 	ret = strchr(s, c);
// 	re = ft_strchr(s, c);

// 	printf("%c | Result | %s\n", c, ret);
// 	printf("%c | Result | %s\n", c, re);

// 	return (0);
// }