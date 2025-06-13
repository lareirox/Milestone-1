#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int		ret1;
	int		ret2;
	char	*str = "Hello, 42!Porto";
	int		n = 42;
	unsigned int u = 3000000000;
	void	*ptr = &n;

	// Teste: String
	ret1 = ft_printf("ft_printf: String: %s\n", str);
	ret2 = printf("printf   : String: %s\n", str);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Char
	ret1 = ft_printf("ft_printf: Char: %c\n", 'A');
	ret2 = printf("printf   : Char: %c\n", 'A');
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Decimal e Inteiro
	ret1 = ft_printf("ft_printf: Decimal: %d, Integer: %i\n", n, n);
	ret2 = printf("printf   : Decimal: %d, Integer: %i\n", n, n);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Unsigned
	ret1 = ft_printf("ft_printf: Unsigned: %u\n", u);
	ret2 = printf("printf   : Unsigned: %u\n", u);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Hexadecimal minúsculo e maiúsculo
	ret1 = ft_printf("ft_printf: Hex lowercase: %x, uppercase: %X\n", n, n);
	ret2 = printf("printf   : Hex lowercase: %x, uppercase: %X\n", n, n);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Ponteiro
	ret1 = ft_printf("ft_printf: Pointer: %p\n", ptr);
	ret2 = printf("printf   : Pointer: %p\n", ptr);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Percentagem
	ret1 = ft_printf("ft_printf: Percent sign: %%\n");
	ret2 = printf("printf   : Percent sign: %%\n");
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	// Teste: Valores extremos
	ret1 = ft_printf("ft_printf: INT_MIN = %d, INT_MAX = %d\n", INT_MIN, INT_MAX);
	ret2 = printf("printf   : INT_MIN = %d, INT_MAX = %d\n", INT_MIN, INT_MAX);
	printf("Return values: ft_printf = %d, printf = %d\n\n", ret1, ret2);

	return (0);
}

