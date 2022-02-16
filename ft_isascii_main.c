#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	int	test;

	test = '\0' - 1;
	while (test <= 0177 + 1)
	{
		printf("ft_isascii(%o | %c) = %d\n", test, test, ft_isascii(test));
		test++;
	}
	return (0);
}
