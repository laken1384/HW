#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1,b;
	float a;
	printf("Enter a integer : ");
	scanf_s("%d", &num1);
	printf("\n");
	a = (float)num1 / 2;
	b = num1 / 2;
	if (a == b) printf("%d is even\n", num1);
	else printf("%d is odd\n", num1);
	system("pause");
	return 0;
}