#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	int	test;

	test = '0' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_isalnum(%c) = %d\n", test, ft_isalnum(test));
		test++;
	}
	return (0);
}
