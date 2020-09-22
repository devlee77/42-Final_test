#include <unistd.h>

int check_before(char *str, int max, char c){
	int i = 0;
	
	while (i < max){
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char *av[]){
	
	if(ac == 3){
		int i = 0;
		
		while (av[1][i]){
			if(check_before(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
			i++;
		}
		
		int j = 0;
		while (av[2][j]){
			if(check_before(av[1], i, av[2][j]) && check_before(av[2], j, av[2][j]))
				write(1, &av[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}