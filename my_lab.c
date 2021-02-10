#include "my_lab.h"

void mySrand(unsigned int x,unsigned int* r) {
	*r = x;
}

unsigned int myRand(unsigned int* r) {
	*r = *r * 4231 + 12345;
	return *r % 100000;
}