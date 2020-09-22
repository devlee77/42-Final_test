#include <unistd.h>

int main(int argc, char *argv[]){
	
	char c[26] = {'z', 'y', 'x', 'w', 'v',
				  'u', 't', 's', 'r', 'q',
				  'p', 'o', 'n', 'm', 'l',
				  'k', 'j', 'i', 'h', 'g',
				  'f', 'e', 'd', 'c', 'b', 'a'};
	
	char c2[26] = {'Z', 'Y', 'X', 'W', 'V',
				   'U', 'T', 'S', 'R', 'Q',
				   'P', 'O', 'N', 'M', 'L',
				   'K', 'J', 'I', 'H', 'G',
				   'F', 'E', 'D', 'C', 'B','A'};
	
	if(argc == 2)
	{
		int i = 0;
		
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				write(1, &c[argv[1][i] - 97], 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, &c2[argv[1][i] - 65], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	
	write(1, "\n", 1);
	return (0);
}