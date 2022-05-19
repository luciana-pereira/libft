/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:17:34 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/26 14:23:51 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s, (ft_strlen(s) + 1));
	return (str);
}

// int main()
// {
// 	char s[] = "Passei no teste.";
	
// 	printf("Result | %s\n", ft_strdup(s));
// 	return (0);
// }