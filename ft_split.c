/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:25:10 by lucperei          #+#    #+#             */
/*   Updated: 2022/04/29 01:21:40 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_word(const char *s, char c)
{
	int	i;
	int	count;
	int	start; 

	i = 0;
	count = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && start == 0)
		{
			start = 1;
			count++;
		}
		else if (s[i] == c && start == 1)
		{
			start = 0;
		}
		i++;
	}
	return (count);
}

static int ft_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}
	
char	**ft_split(char const *s, char c) // Contar palavras - com d = delimitador
{
	char	**w;
	int	n;
	int	d;
	int	i;
	int	l;

	if (!s)
	{
		return (NULL);
	}
	n = ft_count_word(s, c);
	w = (char **)malloc(sizeof(char *) * (n + 1));
	if (!w)
	{
		return (NULL);
	}
	i = 0;
	l = 0;
	while (l < n)
	{
		d = 0;
		if (s[i] != c)
		{
			d = ft_len(&s[i], c);
			w[l] = (char *)ft_calloc((d + 1), sizeof(char));
			if (!w[l])
			{
				return (NULL);
			}
			ft_strlcpy(w[l], &s[i], d + 1);
			l++;
		}
		i = i + 1 + d;
	}
	return (w);
}
