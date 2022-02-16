#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);

int	main(int argc, char **argv)
{
	char	src[] = "xxxxxx";
	char	dst1[] = "ABCDEFGHIJ";
	char	dst2[] = "ABCDEFGHIJ";

	if (argc == 1)
	{
		puts("Executing sample tests, as no argument was given");
		puts("");
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		printf("Original  strlcpy(%s, %s, %lu), returns=%lu\n", dst1, src, strlen(dst1),    strlcpy(dst1, src, strlen(dst1)));
		printf("src  = %s\n", src);
		printf("dst1 = %s\n", dst1);
		puts("");
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
		printf("Custom ft_strlcpy(%s, %s, %lu), returns=%zu\n ", dst2, src, strlen(dst2), ft_strlcpy(dst2, src, strlen(dst2)));
		printf("src  = %s\n", src);
		printf("dst2 = %s\n", dst1);
	}
	else
	{
		puts(argv[1]);
		//printf("%s\n", ft_strcapitalize(argv[1]));
	}
	return (0);
}
