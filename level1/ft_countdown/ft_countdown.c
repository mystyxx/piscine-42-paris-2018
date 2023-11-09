#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

int main(void) {
	for(int i = 57; i>47; i--) {
		ft_putchar(i);
	}
}
