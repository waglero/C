#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main() {
    Book book;

    strcpy(book.title, "C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 634643;

    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.subject);
    printf("Book title: %d\n", book.book_id);

    return 0;
}