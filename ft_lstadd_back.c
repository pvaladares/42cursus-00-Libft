/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pv <pv@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:44:17 by pvaladar          #+#    #+#             */
/*   Updated: 2022/03/08 00:16:47 by pv               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name    | ft_lstadd_back
// Prototype        | void ft_lstadd_back(t_list **lst, t_list *new);
// Turn in files    | -
// Parameters       | lst: The address of a pointer to the first link of a list
//					| new: The address of a pointer to the node to be added to 
//					| the list.
// Return value     | None
// External functs. | None
// Description      | Adds the node ’new’ at the end of the list.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
