/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvaladar <pvaladar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:24:04 by pvaladar          #+#    #+#             */
/*   Updated: 2022/02/14 12:50:37 by pvaladar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = 'a';
	test2 = 'B';
	test3 = '3';
	printf("ft_isalpha(%c) = %d\n", test1, ft_isalpha(test1));
	printf("ft_isalpha(%c) = %d\n", test2, ft_isalpha(test2));
	printf("ft_isalpha(%c) = %d\n", test3, ft_isalpha(test3));
	return (0);
}
