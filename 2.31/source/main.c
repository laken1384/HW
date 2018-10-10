#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	printf("number  square  cube\n");
	for (i = 0; i < 11; i++)
	{
		printf("%d", i);
		if (i < 10) printf(" ");
		printf("      ");
		printf("%d", i*i);
		if (i*i < 10) printf("  ");
		if (10<i*i&&i*i <100) printf(" ");
		printf("     ");
		printf("%d\n",i*i*i);
	}
	system("pause");
	return 0;
}