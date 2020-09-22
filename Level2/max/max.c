
int		max(int* tab, unsigned int len){
	if (len == 0)
		return (0);
	
	long a = 0;
	int i = 0;
	
	while (tab[i]){
		if (tab[i] > a){
			a = tab[i];
		}
		i++;
	}
	return (a);
}