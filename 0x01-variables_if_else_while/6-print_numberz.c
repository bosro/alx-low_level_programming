#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - This is the main/entry function
  * Return: This returns 0 after it the code
  *
  * runs successfully
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
