#include <stdlib.h>

char *ft_strdup(char *src){
	int len = 0;
	while (src[len])
		len++;
	
	char *str;
	str = (char *)malloc(sizeof(char) * (len + 1));
	
	int i = 0;
	while (src[i]){
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}