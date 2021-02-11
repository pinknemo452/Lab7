#include <stdio.h>
#include <time.h>
#include "my_lab.h"
#define gap 10000

int main() { 
	unsigned int r;
	mySrand(time(NULL),&r);
	unsigned int statistic[RAND_MOD/gap + 1] = { 0 };
	/*printf("you can enter seed ");
	int seed;
	scanf("%d", &seed);
	mySrand(seed);*/
	for (int i = 0; i < 500000; ++i) {
		statistic[myRand(&r) / gap]++;
	}
	for (int i = 0; i < 10; ++i) {
		printf("[%d .. %d): %d\n", i*gap, (i+1)*gap-1, statistic[i]);
	}
	return 0;
}