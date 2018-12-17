#include <stdio.h>
//#include "myheader.h";

#undef FILE_SIZE
#define FILE_SIZE 42

#ifndef MESSAGE
    #define MESSAGE "You wish!"
#endif

#ifdef DEBUG
    //debug code
#endif

#define MAX(x,y) ((x) > y ? (x) : (y))

//macro continuation
#define message_for(a, b) \
    printf(#a " and " #b ": We love You!\n");

int main() {

    printf("Max between 20 and 10 is %d\n", MAX(10, 20));

    printf("The message: %s\n", MESSAGE);

    message_for(Me, Me);

    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    printf("ANSI :%d\n", __STDC__);

    return 0;
}