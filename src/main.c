#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000
#define DIAMETER 100
#define RADIUS DIAMETER / 2

int calculate_single() {
    int s;

    s = rand() % DIAMETER;
    return pow(s, 2) + RADIUS;
}

int calculate_point() {
    int x = calculate_single();
    int y = calculate_single();
    return x + y <= pow(DIAMETER, 2);
}

int calculate_pi() {
    int in = 0;

    for (int i = 0; i < SIZE; i++) {
        if (calculate_point()) {
            in++;
        }
    }

    return in;
}

int main() {
    srand(time(0));

    int in = calculate_pi();
    double ratio = ((double)in / (double)SIZE);
    double pi = ratio * 4;

    printf("%d inside the circle, %d outside.\n", in, SIZE - in);
    printf("%f\n", pi);

    return 0;
}
