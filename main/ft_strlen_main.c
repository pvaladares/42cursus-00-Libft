#include <stdio.h>

int	ft_strlen(const char *s);

int	main(void)
{
	const char	s[] = "123";

	printf("ft_strlen(%s) = %d\n", s, ft_strlen(s));
	return (0);
}
