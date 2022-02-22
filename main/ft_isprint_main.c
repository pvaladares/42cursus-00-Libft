#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	int	test;

	test = ' ' - 1;
	while (test <= '~' + 1)
	{
		printf("ft_isprint(%o | %c) = %d\n", test, test, ft_isprint(test));
		test++;
	}
	return (0);
}
