#include<stdio.h>
/**
  *main-Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char alp1[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	} for (i = 0; i < 26; i++)
	{
		putchar(alp1[i]);
	}
	putchar('\n');
	return (0);
}
