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
	char j;

	for (i = 0; i <= 1; i++)
		putchar(i + '0');
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
