#include <unistd.h>

int main(int argc, char *argv[]){
	
	if (argc == 3){
		int i = 0;
		while (argv[1][i]){
			
			int j = 0;
			int check = 0;
			while (j < i){
				if(argv[1][j] == argv[1][i]){
					check = 1;
					break;
				}
				j++;
			}
			
			int check2 = 0;
			j = 0;
			if(!check){
				while(argv[2][j]){
					if(argv[1][i] == argv[2][j]){
						write(1, &argv[1][i], 1);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}