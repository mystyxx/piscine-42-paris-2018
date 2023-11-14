#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(int argc, char **argv) {
	if(argc == 2) {
		int i = 0;
		while(argv[1][i] == ' ') {i++;}
		while(argv[1][i] != '\0' && argv[1][i] != ' ') {
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
}
