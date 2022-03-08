/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pv <pv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:39:58 by pvaladar          #+#    #+#             */
/*   Updated: 2022/03/08 00:14:47 by pv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name    | ft_lstlast
// Prototype        | t_list *ft_lstlast(t_list *lst);
// Turn in files    | -
// Parameters       | lst: The beginning of the list.
// Return value     | Last node of the list
// External functs. | None
// Description      | Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
