#include <unistd.h>

int main(int argc, char *argv[])
{
	char n = '9';
	
	while (n >= '0')
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
	return (0);
}