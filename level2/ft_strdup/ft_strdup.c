#include <stdlib.h>

char *ft_strdup(char *src) {
	int i = 0;
	while(src[i] != '\0') {
		i++;
	}
	
	char* out;
	out = (char*)malloc(i * (sizeof(char)+1));
	
	if(out != NULL) {
		for(int n = 0; n<i; n++) {
			out[n] = src[n];
		}
	}
	else{exit(0);}
	out[i] = '\0';
	return out;
}
