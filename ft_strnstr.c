/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:35:26 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/22 13:40:35 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// STRSTR(3)                Library Functions Manual                STRSTR(3)
//
// NAME
//      strstr, strcasestr, strnstr – locate a substring in a string
//
// LIBRARY
//      Standard C Library (libc, -lc)
//
// SYNOPSIS
//      #include <string.h>
//
//      char *
//      strstr(const char *haystack, const char *needle);
//
//      char *
//      strcasestr(const char *haystack, const char *needle);
//
//      char *
//      strnstr(const char *haystack, const char *needle, size_t len);
//
//      #include <string.h>
//      #include <xlocale.h>
//
//      char *
//      strcasestr_l(const char *haystack, const char *needle, locale_t loc);
//
// DESCRIPTION
//      The strstr() function locates the first occurrence of the 
//		null-terminated string needle in the null-terminated string haystack.
//
//      The strcasestr() function is similar to strstr(), but ignores the case 
//		of both strings.
//
//      The strnstr() function locates the first occurrence of the 
//		null-terminated string needle in the string haystack, where not more 
//		than len characters are searched.
//      Characters that appear after a ‘\0’ character are not searched.  
//		Since the strnstr() function is a FreeBSD specific API, it should only 
//		be used when portability is not a concern.
//
//      While the strcasestr() function uses the current locale, 
//		the strcasestr_l() function may be passed a locale directly. 
//		See xlocale(3) for more information.
//
// RETURN VALUES
//      If needle is an empty string, haystack is returned; if needle occurs 
//		nowhere in haystack, NULL is returned; otherwise a pointer to the first
//		character of the first occurrence of needle is returned.
//
// EXAMPLES
//      The following sets the pointer ptr to the "Bar Baz" portion of 
//		largestring:
//
//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;
//
//            ptr = strstr(largestring, smallstring);
//
//      The following sets the pointer ptr to NULL, because only the first 
//		4 characters of largestring are searched:
//
//            const char *largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;
//
//            ptr = strnstr(largestring, smallstring, 4);

#include "libft.h" // size_t is defined in header <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			if (haystack[i + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}