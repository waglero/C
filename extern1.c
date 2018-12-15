#include <stdio.h>

int count;
extern void write_extern();

void main() {
	count = 5;
	write_extern();
}
