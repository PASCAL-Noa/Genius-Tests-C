#ifdef _WIN32
#include <io.h>
#define write _write
#else
#include <unistd.h>
#endif

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i++], 1);
	}
}

