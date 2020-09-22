#include <unistd.h>

int main(int ac, char *av[]){
	
	if(ac == 2){
		int len = 0;
		while (av[1][len])
			len++;
		len -= 1;
		while (av[1][len] == ' ' || av[1][len] == '\t')
			len--;
		
		while (av[1][len] && !(av[1][len] == ' ' || av[1][len] == '\t')){
			len--;
		}
		len += 1;
		while (av[1][len] && !(av[1][len] == ' ' || av[1][len] == '\t')){
			write(1, &av[1][len], 1);
			len++;
		}
	}
	
	write(1, "\n", 1);
	return (0);
}