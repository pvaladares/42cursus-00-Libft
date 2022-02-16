#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(int argc, char **argv)
{
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";
	int		c = 97;
	int		len = 3;

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("dst1 = %s\n", dst1);
		printf("   memset(%s, %d, %s)\n", dst1, c, (unsigned char *)memset(dst1, c, len));
		printf("dst1 = %s\n", dst1);
		puts("");
		printf("dst2 = %s\n", dst2);
		printf("ft_memset(%s, %d, %s)\n", dst2, c, (unsigned char *)ft_memset(dst2, c, len));
		printf("dst2 = %s\n", dst2);
	}
	else
	{
		puts(argv[1]);
		//printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
