#include <stdio.h>

int	ft_toupper(int c);

int	main(void)
{
	int	test;

	test = 'a' - 1;
	while (test <= 'z' + 1)
	{
		printf("ft_toupper(%o | %c) = %c\n", test, test, ft_toupper(test));
		test++;
	}
	return (0);
}
