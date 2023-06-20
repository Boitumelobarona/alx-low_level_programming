#include<stdio.h>

/**
  *main-Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	char alph[26];
	int i;

	for (i = 97; i < 122; i++)
	{
		putchar(alph[i]);
	}
	putchar('\n');
	return (0);
}
