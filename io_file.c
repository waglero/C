#include <stdio.h>

void main() {
    FILE *fp;
    FILE *fpr;
    char buff[255];

    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    fpr = fopen("/tmp/test.txt", "r");
    fscanf(fpr, "%s", buff);
    printf("1: %s\n", buff);

    fgets(buff, 255, fpr);
    printf("2: %s\n", buff);

    fgets(buff, 255, fpr);
    printf("3: %s\n", buff);
    fclose(fpr);
}