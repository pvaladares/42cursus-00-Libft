/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:38:15 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/16 16:39:13 by pvaladar         ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
			result = result * 10 + str[i] - '0';
			i++;
	}
	return (result * sign);
}
