#include <stdio.h>

int	ft_tolower(int c);

int	main(void)
{
	int	test;

	test = 'A' - 1;
	while (test <= 'Z' + 1)
	{
		printf("ft_tolower(%o | %c) = %c\n", test, test, ft_tolower(test));
		test++;
	}
	return (0);
}
