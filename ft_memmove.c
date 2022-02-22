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
// [crash]: your memmove crash because it read too many bytes or attempt to read on dst !

// To be noted that MEMCPY(3) mentions the following:
// Applications in which dst and src might overlap should use memmove(3) 
// instead.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

/*
[crash]: your memmove crash because it read too many bytes or attempt to read on dst !
Test code:
        int size = 10;
        char *dst = electric_alloc(size);
        char *data = electric_alloc(size);

        __builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
        ft_memmove(dst, data, size);
        dst = electric_alloc_rev(size);
        data = electric_alloc_rev(size);
        __builtin___memset_chk (data, 'A', size, __builtin_object_size (data, 0));
        ft_memmove(dst, data, size);
        exit(TEST_SUCCESS);
*/
