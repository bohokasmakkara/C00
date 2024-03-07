#include <unistd.h>

void	ft_putnum(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		ft_putnum(i);
		i++;
	}
}
