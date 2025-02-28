#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	resultado(char x, char y, char z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (x != '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				resultado(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
}
