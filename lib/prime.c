#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 80000000

int prime_n(int n) {
	int i, j, m;
	char *p=malloc(sizeof(char) * MAX + 1);
	//init
	for (i = 1; i <= MAX; i++)
		p[i] = 1;
	//sieve
	m = 1;
	for (i = 3; i <= MAX; i+=2) {
		if (p[i]) {
			if (++m == n)
				return i;
			for (j = i*2; j <= MAX; j+=i) {
				p[j] = 0;
			}
		}
	}
}

int main() {
	printf("%d\n", prime_n(4263116));
}
