/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:13:38 by lucperei          #+#    #+#             */
/*   Updated: 2023/06/26 02:02:32 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtok(char *str, const char *delimiters)
{
    static char *next_token = NULL;
    char *token;
    int index;

    if (str != NULL)
        next_token = str;
    while (*next_token && ft_strchr(delimiters, *next_token) != NULL)
        next_token++;
    if (*next_token == '\0')
        return (NULL);
    token = next_token;
    index = 0;
    while (next_token[index] != '\0')
    {
        if (ft_strchr(delimiters, next_token[index]) != NULL)
        {
            next_token[index] = '\0';
            next_token += index + 1;
            break;
        }
        index++;
    }
    return (token);
}
