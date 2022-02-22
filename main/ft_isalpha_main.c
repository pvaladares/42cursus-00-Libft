#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	test;

	test = 'A' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_isalpha(%c) = %d\n", test, ft_isalpha(test));
		test++;
	}
	return (0);
}
