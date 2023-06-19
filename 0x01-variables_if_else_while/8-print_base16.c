#include<stdio.h>

/**
  *main-Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	char num[10] = "0123456789";
	char alp[6] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	for (i = 0; i < 6; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
