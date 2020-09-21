#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int i;
	if (argc == 4)
	{
		i = 0;
		while (argv[2][i])
		{
			if (i > 1)
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}