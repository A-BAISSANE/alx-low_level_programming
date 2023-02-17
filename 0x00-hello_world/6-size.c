#include <stdio.h>
/**
 * main - Entry point
 * description: A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: %1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %1u byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %1u byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
