#include <unistd.h>

int ft_strlen(char *str) {
	int i = 0;
	while(str[i] != '\0') {
		i++;
	}
	return i;
}

char ft_strcpy(char* s1, char* s2) {
	if(ft_strlen(s2)<=ft_strlen(s1)) {
		for(int i = 0; i<ft_strlen(s1); i++) {
			s1[i] = s2[i];
		}
	}
}
