#include<stdio.h>

/**
  *main-Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n = 0123456789;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
