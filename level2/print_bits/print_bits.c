#include <unistd.h>

int print_bits(unsigned char octet) {
	int currentbit;
	unsigned char byte[8];
	int i = 0;

	while(i!=9) {
		currentbit = octet%2 + 48;
		byte[i] = currentbit;
		octet = octet/2;
		i++;
	}
	
	for(int i = 7; i> -1; i--) {
		write(1, &byte[i], 1);
	}
}

/*int main(void) {
	unsigned char uwu = 174;
	print_bits(uwu);
	return 0;
} */
