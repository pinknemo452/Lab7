#include <stdio.h>
#include <time.h>
#include "my_lab.h"
#define GAP 10000

int main() {
	mySrand(time(NULL));
	unsigned int statistic[7] = {0};
	/*printf("you can enter seed ");
	int seed;
	scanf("%d", &seed);
	mySrand(seed);*/
	for (int i = 0; i < 500; ++i) {
		int g = (int)rand_n();
		if(g == 0)
		{
			statistic[0]++;
		}
		else if(g == -1)
		{
			statistic[1]++;
		}
		else if (g == 1)
		{
			statistic[2]++;
		}
		else if (g == 2)
		{
			statistic[3]++;
		}
		else if (g == -2)
		{
			statistic[4]++;
		}
		else if (g == 3)
		{
			statistic[5]++;
		}
		else if (g == -3)
		{
			statistic[6]++;
		}
	}
	printf("0 : %f\n",(double)statistic[0]/500 );
	printf("-1 : %f\n", (double)statistic[1]/500);
	printf("-2 : %f\n", (double)statistic[4]/500);
	printf("-3 : %f\n", (double)statistic[6]/500);
	printf("1: %f\n", (double)statistic[2]/500);
	printf("2: %f\n", (double)statistic[3]/500);
	printf("3 : %f\n", (double)statistic[5]/500);
	
	
	return 0;
}
