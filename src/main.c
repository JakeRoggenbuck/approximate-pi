#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000
#define DIAMETER 100
#define RADIUS DIAMETER / 2

int X[SIZE];
int Y[SIZE];

void add_nums(int *array) {
    int random;

    for (int i = 0; i < SIZE; i++) {
        random = rand() % DIAMETER;
        array[i] = random;
    }
}

void print_array(int *array) {
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", array[i]);
    }
}

int calculate_pi() {
    int x, y, in;

    for (int i = 0; i < SIZE; i++) {
        x = pow(X[i], 2); /* + RADIUS; */
        y = pow(Y[i], 2); /* + RADIUS; */
        if (x + y <= pow(DIAMETER, 2)) {
            in++;
        }
    }

    return in;
}

int main() {
    unsigned int seed;

    srand(seed);

    add_nums(&X);
    add_nums(&Y);

    int in = calculate_pi();
	printf("%d\n", in);
    double pi = (double)(in / SIZE);

	printf("%f\n", pi);

    return 0;
}
