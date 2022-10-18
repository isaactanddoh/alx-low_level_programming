#include <unistd.h>
#include "main.h"

/**
 * man - Entry Point
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	char word[5] = "_putchar";
	int i;
	
	for (i=0; i < 5; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}	
