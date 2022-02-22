/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:03:39 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/22 15:54:16 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name    | ft_substr
// Prototype        | char *ft_substr(char const *s, unsigned int start, 
//					| size_t len);
// Turn in files    | -
// Parameters       | s: The string from which to create the substring. 
//					| start: The start index of the substring in the string ’s’.
//					| len: The maximum length of the substring.
// Return value     | The substring.
//					| NULL if the allocation fails.
// External functs. | malloc
// Description      | Allocates (with malloc(3)) and returns a substring from
//					| the string ’s’.
//					| The substring begins at index ’start’ and is of maximum 
//					| size ’len’.

#include "libft.h" // size_t is defined in header <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
