#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	ft_atoi(const char *str);

int	main(void)
{
	char	str[] = "    123456";

	printf("INT_MAX = %d | INT_MIN = %d\n", INT_MAX, INT_MIN);
	printf("ft_atoi(%s) = %d\n", str, ft_atoi(str));
	printf("   atoi(%s) = %d\n", str, atoi(str));
}
