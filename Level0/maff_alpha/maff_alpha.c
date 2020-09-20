#include <unistd.h>

int main(int argc, char *argv[])
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}