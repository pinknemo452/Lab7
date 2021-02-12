#include "my_lab.h"

#include <stdio.h>

unsigned int mySrand(unsigned int x) {
	static unsigned int r = 1;
	if (x != 0) {
		r = x;
	}
	return r;
}

unsigned int myRand() {
	return mySrand((mySrand(0)*4321+12345)) % RAND_MOD;
}

double rand_n()
{
	double z = (double)myRand() / RAND_MOD;
	double f = (double)myRand() / RAND_MOD;
	return cos(2*3.1415926535*f)*sqrt(-2*log(z));
}