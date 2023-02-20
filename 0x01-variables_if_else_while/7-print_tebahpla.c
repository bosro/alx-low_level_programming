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
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);	
}
