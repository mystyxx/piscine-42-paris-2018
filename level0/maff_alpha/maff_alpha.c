#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(void) {
	for(int i = 97; i<123; i = i+2) {
		ft_putchar(i);
		ft_putchar(i-31);
	}
	char newline = '\n';
	ft_putchar(newline);
	return 0;
}
