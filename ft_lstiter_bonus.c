/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:49:35 by pvaladar          #+#    #+#             */
/*   Updated: 2022/03/07 18:54:56 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function name    | ft_lstiter
// Prototype        | void ft_lstiter(t_list *lst, void (*f)(void *));
// Turn in files    | -
// Parameters       | lst: The address of a pointer to a node.
//					| f: The address of the function used to iterate on the 
//					| list.
// Return value     | None
// External functs. | None
// Description      | Iterates the list ’lst’ and applies the function ’f’ on
//					| the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
