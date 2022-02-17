/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pv <pv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:38:15 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/17 13:06:09 by pv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ATOI(3)                    Library Functions Manual                   ATOI(3)
//
// NAME
//      atoi, atoi_l – convert ASCII string to integer
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <stdlib.h>
//
//      int atoi(const char *str);
//
//      #include <xlocale.h>
//
//      int atoi_l(const char *str, locale_t loc);
//
// DESCRIPTION
//      The atoi() function converts the initial portion of the string pointed
//		to by str to int representation.
//
//      It is equivalent to:
//
//            (int)strtol(str, (char **)NULL, 10);
//
//      While the atoi() function uses the current locale, the atoi_l() 
//		function may be passed a locale directly. See xlocale(3) for more 
//		information.
//
// IMPLEMENTATION NOTES
//      The atoi() and atoi_l() functions are thread-safe and async-cancel-safe.
//
//      The strtol() and strtol_l() functions are recommended instead of atoi() 
//		and atoi_l() functions, especially in new code.
//
// ERRORS
//      The function atoi() need not affect the value of errno on an error.

#include "libft.h"
#include <stdio.h>
#include <limits.h>

// Code to handle over long max value (LLONG_MAX) & min value (LLONG_MIN)
// LLONG_MIN = 9223372036854775808 | LLONG_MAX = 9223372036854775807
int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((*(str + i) >= '\t' && *(str + i) <= '\r') || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
	{
		sign = -sign;
		i++;
	}
	if (*(str + i) == '+')
		i++;
	while (*(str + i) && ft_isdigit(*(str + i)))
	{
		if (result >= 9223372036854775807 && sign == 1)
			return (-1);
		else if (result > 9223372036854775807 && sign == -1)
			return (0);
		result = (result * 10) + (*(str + i) - '0');
		i++;
	}
	return ((int)(result * sign));
}
