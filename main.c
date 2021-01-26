#include "ft_printf.h"

int		main()
{
	int num;
	char *str;
	int hexa;

	num = 123456789;
	str = "Tanguy";
	hexa = 123456789;
	ft_printf("| %d", ft_printf("PERSO => |%10.4s|%20.15d|%20.15x", str, num, hexa));
	write(1, "\n", 1);
	printf("| %d", printf("ORIGI => |%10.4s|%20.15d|%20.15x", str, num, hexa));
}
