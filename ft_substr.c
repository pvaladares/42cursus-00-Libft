/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:03:39 by pvaladar          #+#    #+#             */
/*   Updated: 2022/03/09 17:44:23 by pvaladar         ###   ########.fr       */
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
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
	}
	sub[i] = 0;
	return (sub);
}
