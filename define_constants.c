#include <stdio.h>

#define LENGTH 10
#define WIDTH 5

int main () {
	const char NEWLINE = '\n';
	int area;
	area = LENGTH * WIDTH;
	printf("Value of area: %d", area);
	printf("%c", NEWLINE);

	return 0;
}
