#include <unistd.h>

void	ft_is_negative(int n)

{
	char	x;
	char	y;

	x = 'P';
	y = 'N';
	if (n < 0)
	{
		write (1, &y, 1);
	}
	else
	{
		write (1, &x, 1);
	}
}
