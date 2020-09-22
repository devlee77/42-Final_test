
char    *ft_strrev(char *str){
	int len = 0;
	while (str[len])
		len++;
	int i = 0;
	len -= 1;
	while (i < len + 1 / 2){
		char temp;
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return (str);
}