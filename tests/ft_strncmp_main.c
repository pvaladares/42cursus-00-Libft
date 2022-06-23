#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char **argv)
{
	char			*s1;
	char			*s2;
	unsigned int	n;

	if (argc == 4)
	{
		s1 = argv[1];
		s2 = argv[2];
		n = atoi(argv[3]);
	}
	else
	{
		s1 = "ABCxyz";
		s2 = "ABC123";
		n = 4;
		puts("No parameters s1,  s2 and n provided. Using samples");
	}
	printf("  _strncmp(%s, %s, %d) = %d\n", s1, s2, n, strncmp(s1, s2, n));
	printf("ft_strncmp(%s, %s, %d) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));
	return (0);
}
