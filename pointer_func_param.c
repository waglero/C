#include <stdio.h>

void getSeconds(unsigned long *par);
int time();
double getAverage(int *arr, int size);

int main() {
    unsigned long sec;
    getSeconds(&sec);

    printf("Number of seconds: %ld\n", sec);

    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    avg  = getAverage(balance, 5);
    printf("Average value  is: %f\n", avg);

    return 0;
}

double getAverage(int *arr, int size) {
    int i, sum = 0;
    double avg;

    for (i = 0; i <  size; ++i) {
        sum += arr[i];
    }

    avg = (double) sum / size;

    return avg;
}

void getSeconds(unsigned long *par) {
    *par = time(NULL);
    return;
}