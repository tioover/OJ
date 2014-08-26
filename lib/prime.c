#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int pi(int max) {
	int i, j, m;
	int len = max+1;
	size_t size = sizeof(char) * len;
	char *p = malloc(size);
	//init
	memset(p, 1, size);
	//sieve
	m = 1;
	for (i = 3; i <= (int)sqrt(max)+1; i+=2) {
		if (p[i]) {
			m++;
			for (j = i*2; j <= max; j+=i) {
				p[j] = 0;
			}
		}
	}
	return m;
}

int main() {
	clock_t start, end;
	start = clock();
	printf("%d\n", pi(100000000));
	end = clock();
	printf("%f\n", (double)(end-start)/CLOCKS_PER_SEC);
}
