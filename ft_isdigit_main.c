/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:24:04 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/14 12:56:34 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = 'a';
	test2 = 'B';
	test3 = '3';
	printf("ft_isdigit(%c) = %d\n", test1, ft_isdigit(test1));
	printf("ft_isdigit(%c) = %d\n", test2, ft_isdigit(test2));
	printf("ft_isdigit(%c) = %d\n", test3, ft_isdigit(test3));
	return (0);
}
