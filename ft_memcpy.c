/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pv <pv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:30:29 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/17 13:03:27 by pv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MEMCPY(3)               BSD Library Functions Manual               MEMCPY(3)
//
// NAME
//      memcpy -- copy memory area
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *memcpy(void *restrict dst, const void *restrict src, size_t n);
//
// DESCRIPTION
//      The memcpy() function copies n bytes from memory area src to memory 
//		area dst.  
//		If dst and src overlap, behavior is undefined.
//      Applications in which dst and src might overlap should use memmove(3)
//		instead.
//
// RETURN VALUES
//      The memcpy() function returns the original value of dst.

#include "libft.h" // size_t is defined in header <stdlib.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
