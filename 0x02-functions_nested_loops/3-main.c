#include "main.h"

/**
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *  
 * Description: prints all lowercase letters
 * Return: Always(0).
 */

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
