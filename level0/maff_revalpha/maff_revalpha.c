#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(void) {
	for(int i = 122; i>96; i = i-2) {
		ft_putchar(i);
		ft_putchar(i-33);
	}
	char newline = '\n';
	ft_putchar(newline);
	return 0;
}
