// MEMMOVE(3)                Library Functions Manual                MEMMOVE(3)
//
// NAME
//      memmove – copy byte string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      void *
//      memmove(void *dst, const void *src, size_t len);
//
// DESCRIPTION
//      The memmove() function copies len bytes from string src to string dst.
//		The two strings may overlap; the copy is always done in a 
//		non-destructive manner.
//
// RETURN VALUES
//      The memmove() function returns the original value of dst.

#include "libft.h" // size_t is defined in header <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src >= len)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	return (dst);
}
