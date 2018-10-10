#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 4, b = 0, i,j;
	for (j = 0; j < 5;j++)
	{
	for (i = 0; i < a; i++) printf(" ");
	for (i = a; i < a + b+1; i++) printf("*");
	for (i = a + b+1; i < 9; i++) printf(" ");
	printf("\n");
	a--;
	b=b+2;
	}
	system("pause");
	return 0;
}