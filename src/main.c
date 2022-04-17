#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define RADIUS 100

int* X[SIZE];
int* Y[SIZE];

int main() {
	unsigned int seed;
	srand(seed);

	for (int i = 0; i < SIZE; i++) {
		int random = rand() % RADIUS;
		printf("%d\n", random);
	}

	return 0;
}
