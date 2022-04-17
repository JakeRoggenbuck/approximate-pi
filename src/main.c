#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000
#define RADIUS 100

int X[SIZE];
int Y[SIZE];

void add_nums(int *array) {
    int random;

    for (int i = 0; i < SIZE; i++) {
        random = rand() % RADIUS;
        array[i] = random;
    }
}

void print_array(int *array) {
    int c;

    while (c != '\0') {
        c = array[i];
        printf("%d\n", array[i]);
    }
}

int main() {
    int i;
    unsigned int seed;

    srand(seed);

    add_nums(&X);
    print_array(&X);

    return 0;
}
