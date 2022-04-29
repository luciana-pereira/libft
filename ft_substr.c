/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:15:37 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/28 23:20:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int ft_leng(size_t len, size_t start, size_t max)
{
	unsigned int i;
	
	if (start < len)
	{
		i = len - start;
	}
	if (start >= len)
	{
		i = 0;
	}
	if (i > max)
	{
		i = max;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int	i;
	size_t	c;

	if (!s)
	{
		return (NULL);
	}
	c = (unsigned int) ft_strlen(s);
	i = ft_leng(c, start, len);
	if (i == 0)
	{
		return (ft_strdup(""));
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, &s[start], i + 1);
	return (str);
}
