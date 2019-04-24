#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 8

int main(void)
{
	char a[SIZE*2], b[SIZE], c[SIZE*2], d[SIZE];

	scanf_s("%s", a, sizeof(char) * SIZE);
	scanf_s("%s", b, sizeof(char) * SIZE);
	scanf_s("%s", c, sizeof(char) * SIZE);
	scanf_s("%s", d, sizeof(char) * SIZE);


	strcat_s(a, sizeof(char) * SIZE * 2, b);
	strcat_s(c, sizeof(char) * SIZE * 2, d);

	long int A = atol(a);
	long int B = atol(c);
	
	printf("%ld", A + B);

	return 0;
}
