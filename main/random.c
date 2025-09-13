#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.141592635358979323846
#endif

double drand()	/* uniform distribution, (0..1] */
{
	return (rand() + 1.0) / (RAND_MAX + 1.0);
}

double random_normal()	/* normal distribution, centered on 0, std dev 1 */
{
	return sqrt(-2 * log(drand())) * cos(2 * M_PI * drand());
}
