#include <stdio.h>
#include <stdarg.h>

/*
*They are learnt from web
*2018/12/2
*/
unsigned long int next = 1;

/* rand:  return pseudo-random integer on 0..32767 */
int rand()
{
	next = next * 1103515245 + 12345;
	return (unsigned int )(next /65536)%32768;
}
/* srand:  set seed for rand() */
void srand(unsigned int seed)
{
    next = seed;
}