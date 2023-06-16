#include <stdio.h>

/**
  *main- prins sizes of various types
  *Return: Always 0(Success)
  */
int main(void)
{
	char a = 1 bytes
	int b = 4 bytes
	float c = 4 bytes
	double d = 8 bytes

	printf("Size of char: %zu bytes\n", sizeof(a));
	printf("Size of int: %zu bytes\n", sizeof(b));
	printf("Size of float: %zu bytes\n", sizeof(c));
	printf("Size of double: %zu bytes\n", sizeof(d));
	printf("Size of short: %zu bytes\n", sizeof(short));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	return (0);
}
