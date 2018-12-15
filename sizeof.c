#include <stdio.h>
#include <limits.h>

int main() {
	printf("Storage size for int: %d \n", sizeof(int));
	sizeof_char();
	return 0;
}

int sizeof_char() {
	printf("Storage size for char: %d \n", sizeof(char));
	return 0;
}
