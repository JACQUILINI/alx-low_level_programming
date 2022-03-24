#include <stdio.h>
#include "main.h"

/**
 *swap_int - funtion to swap two integers
 *@a: first int
 *@b: Second int
 *return: void
 */

void swap_int(int *a, int *b)
{
	int hold;
	
	hold = *a;
	
	*a = *b;
	
	*b = hold;
}
