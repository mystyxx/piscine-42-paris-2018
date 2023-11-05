#include <unistd.h>

int main(void) {
	char z = 'z';
	char newline = '\n';
	write(1, &z, 1);
	write(1, &newline, 1);
	return 0;
}
