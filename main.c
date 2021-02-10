#include <stdio.h>
#include <time.h>
#include "my_lab.h"

int main() { 
	unsigned int statistic[10] = {0};
	unsigned int r;
	mySrand(time(NULL),&r);
	/*printf("you can enter seed ");
	int seed;
	scanf("%d", &seed);
	mySrand(seed);*/
	for (int i = 0; i < 500000; ++i) {
		statistic[myRand(&r) / 10000]++;
	}
	printf("0-9999: %d\n", statistic[0]);
	for (int i = 1; i < 10; i++) {
		printf("%d - %d: %d\n", i*10000, (i+1)*10000-1, statistic[i]);
	}
	return 0;
}