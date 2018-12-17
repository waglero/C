#include <stdio.h>
#include <string.h>

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;

struct {
    unsigned int age : 3;
} Age;

int main() {
    printf("Memory size occupied by status1: %d\n", sizeof(status1));
    printf("Memory size occupied by status2: %d\n", sizeof(status2));

    Age.age = 4; //100
    printf("Sizeof( Age ) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);
    
    Age.age = 7; //111
    printf("Sizeof( Age ) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);

    Age.age = 8; //1000 (overflow)
    printf("Sizeof( Age ) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);

    return 0;
}