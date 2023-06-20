#include<stdio.h>

/**
  *main-Entry point
  *Return: Alwaysi 0 (Success)
  */
int main(void)
{
	char nam[] = "_putchar";
	int i;

	for (i = 0; nam[i] != '\0'; i++)
	{
		putchar(nam[i]);
	}
		putchar('\n');
	return (0);
}
