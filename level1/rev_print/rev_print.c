#include <unistd.h>

int ft_strlen(char* str) {
	int i = 0;
	while(str[i] != '\0') {
		i++;
	}
	return i;
}

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(int argc, char **argv) {
	if(argc == 1) {
		for(int i = ft_strlen(argv[1]); i>=0; i--) {
			ft_putchar(argv[1][i]);
		}
	}
	ft_putchar('\n');
}

