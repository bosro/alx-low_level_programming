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
	printf("Size of a char: &lu byte(s)", sizeof(char));
	printf("Size of an int: &lu byte(s)", sizeof(int));
	printf("Size of a char: &lu byte(s)", sizeof(float));
	printf("Size of a long int: &lu byte(s)", sizeof(long int));
	printf("Size of a long long int: &lu byte(s)", sizeof(long long int));
	return (0);

}
