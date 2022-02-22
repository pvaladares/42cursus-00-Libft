#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	int	test;

	test = '0' - 1;
	while (test <= '9' + 1)
	{
		printf("ft_isdigit(%c) = %d\n", test, ft_isdigit(test));
		test++;
	}
	return (0);
}
