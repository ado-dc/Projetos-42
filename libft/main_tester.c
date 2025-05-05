#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_isalpha(void)
{
	printf("ft_isalpha('A') = %d | isalpha('A') = %d\n", ft_isalpha('A'), isalpha('A'));
	printf("ft_isalpha('1') = %d | isalpha('1') = %d\n", ft_isalpha('1'), isalpha('1'));
}

void	test_ft_isdigit(void)
{
	printf("ft_isdigit('3') = %d | isdigit('3') = %d\n", ft_isdigit('3'), isdigit('3'));
	printf("ft_isdigit('a') = %d | isdigit('a') = %d\n", ft_isdigit('a'), isdigit('a'));
}

void	test_ft_isalnum(void)
{
	printf("ft_isalnum('a') = %d | isalnum('a') = %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum('#') = %d | isalnum('#') = %d\n", ft_isalnum('#'), isalnum('#'));
}

void	test_ft_isascii(void)
{
	printf("ft_isascii(127) = %d | isascii(127) = %d\n", ft_isascii(127), isascii(127));
	printf("ft_isascii(200) = %d | isascii(200) = %d\n", ft_isascii(200), isascii(200));
}

void	test_ft_isprint(void)
{
	printf("ft_isprint('A') = %d | isprint('A') = %d\n", ft_isprint('A'), isprint('A'));
	printf("ft_isprint(31) = %d | isprint(31) = %d\n", ft_isprint(31), isprint(31));
}

void	test_ft_strlen(void)
{
	const char	*str = "42Luanda";

	printf("ft_strlen(\"%s\") = %lu | strlen(\"%s\") = %lu\n", str, ft_strlen(str), str, strlen(str));
}

void	test_ft_toupper(void)
{
	printf("ft_toupper('a') = %c | toupper('a') = %c\n", ft_toupper('a'), toupper('a'));
}

void	test_ft_tolower(void)
{
	printf("ft_tolower('Z') = %c | tolower('Z') = %c\n", ft_tolower('Z'), tolower('Z'));
}

void	test_ft_atoi(void)
{
	const char	*str1 = "42";
	const char	*str2 = "   -1234abc";

	printf("ft_atoi(\"%s\") = %d | atoi(\"%s\") = %d\n", str1, ft_atoi(str1), str1, atoi(str1));
	printf("ft_atoi(\"%s\") = %d | atoi(\"%s\") = %d\n", str2, ft_atoi(str2), str2, atoi(str2));
}

int	main(void)
{
	printf("=== Testing Libft ===\n\n");
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_atoi();
	printf("\n=== Done ===\n");
	return (0);
}
