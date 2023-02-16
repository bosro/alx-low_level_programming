#include <stdio.h>

/**
  * main - This is the main/entry function
  * Printf - Send output to the the standard output
  *
  * Return: The retturn funtion returns 0 when program
  * executes successfully
  */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);

}
