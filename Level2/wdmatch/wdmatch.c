#include <unistd.h>

int main(int ac, char *av[]){
	
	if (ac == 3){
		int i = 0;
		int len = 0;
		int j = 0;
		
		while (av[1][len])
			len++;
		
		int check;
		while (av[2][i]){
			if(av[1][j] == av[2][i]){
				j++;
				check++;
			}
			i++;
		}
		
		if(len == check){
			write(1, av[1], len);
		} 
	}
	write(1, "\n", 1);
	return (0);
}