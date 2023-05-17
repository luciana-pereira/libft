/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 03:40:41 by lucperei          #+#    #+#             */
/*   Updated: 2023/05/14 06:56:55 by lucperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\f' || c == '\v');
}

int	is_digit(int c, float res)
{
	while (ft_isdigit(c))
	{
		res = res * 10.0f + (c - '0');
		c++;
	}
	return (res);
}

// #include <ctype.h>
//Dividir recursivamente para funcionar verificação de ordenação
float ft_atof(const char* str) {
    float result = 0.0f;
    int sign = 1;
    int has_decimal = 0;
    float decimal_place = 1.0f;

    // skip whitespace
    while (ft_isspace(*str)) {
        str++;
    }

    // check for sign
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // process digits before decimal point
    while (ft_isdigit(*str)) {
        result = result * 10.0f + (*str - '0');
        str++;
    }

    // process decimal point and digits after it
    if (*str == '.') {
        has_decimal = 1;
        str++;

        while (ft_isdigit(*str)) {
            decimal_place *= 10.0f;
            result += (*str - '0') / decimal_place;
            str++;
        }
    }

    // handle exponent, if any
    if (*str == 'e' || *str == 'E') {
        str++;

        int exponent_sign = 1;
        if (*str == '-') {
            exponent_sign = -1;
            str++;
        } else if (*str == '+') {
            str++;
        }

        int exponent_value = 0;
        while (ft_isdigit(*str)) {
            exponent_value = exponent_value * 10 + (*str - '0');
            str++;
        }

        decimal_place = 1.0f;
        for (int i = 0; i < exponent_value; i++) {
            decimal_place *= 10.0f;
        }

        if (exponent_sign == -1) {
            result /= decimal_place;
        } else {
            result *= decimal_place;
        }
    }

    return sign * (has_decimal ? result : (float)result);
}
