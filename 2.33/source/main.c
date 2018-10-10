#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c, d, e,total;
	printf("Enter your total miles driven per day : ");
	scanf_s("%d", &a);
	printf("Enter your cost per gallon of gasoline : ");
	scanf_s("%d", &b);
	printf("Enter your average mailes per gallon : ");
	scanf_s("%d", &c);
	printf("Enter your parking fees per day : ");
	scanf_s("%d", &d);
	printf("Enter your tolls per day : ");
	scanf_s("%d", &e);
	total = a / c*b + d + e;
	printf("%d\n", total);
	system("pause");
	return 0;
}