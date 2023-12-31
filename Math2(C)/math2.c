#include <math.h>
#include <stdio.h>

const int r = 2;
const float dx = 0.001;
const int iters = ((r*2)/(dx));

float A = 0;
int x = -2;

int main() {
	for (int i = 0; i < iters; i++) {
		A = A + sqrt((r * r) - (x *x)) * dx;
		x = x + dx;
	}

	float S = r * r * 2 * A;

	printf("%f", S);

}