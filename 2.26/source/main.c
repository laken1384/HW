#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num1, num2;
	printf("Enter two ingtegers : ");
	scanf_s("%d%d", &num1, &num2);
	if ((num1%num2) != 0) printf("%d is not %d multiples", num1, num2);
	else printf("%d is  %d multiples", num1, num2);
	system("pause");
	return 0;
}