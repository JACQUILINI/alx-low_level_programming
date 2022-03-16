#include <stdio.h>
#include "main.h"
/*
 * print_alphabet_x10.c - prints the alphabets in lower case ten times
 */

void print_alphabet_x10(void)
{
	
	int i = 0;
	char a='a';

	while (i <= 9)
	{
		while (a <= 'z')
		{	
			_putchar(a);
			
			a++;
		}
	
		i++;			
		_putchar('\n');
	}

}
