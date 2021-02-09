#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
unsigned int r;
void mySrand(unsigned int x) {
	r = x;
}
unsigned int myRand() {
	r = r * 4231 + 12345;
	return r % 100000;
}
int main() { 
	unsigned int statistic[11] = {0};
	mySrand(time(0));
	/*printf("you can enter seed ");
	int seed;
	scanf("%d", &seed);
	mySrand(seed);*/
	for (int i = 0; i < 500000; i++) {
		statistic[myRand() / 10000]++;
	}
	printf("0-9999: %d\n", statistic[0]);
	for (int i = 1; i < 10; i++) {
		printf("%d0000 - %d9999: %d\n", i, i, statistic[i]);
	}
	return 0;
}