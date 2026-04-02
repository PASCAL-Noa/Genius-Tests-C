#ifdef _WIN32
#include <io.h>
#define write _write
#else
#include <unistd.h>
#endif


void	ft_putchar(char c);
void	ft_putnbr(int nb);

/*int	main(void)
{
	ft_putnbr(-2147483648);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return;
		}
		nb *= -1;
	}
	if (nb / 10 == 0)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}
