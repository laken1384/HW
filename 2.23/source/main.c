#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int max, min,num1,num2,num3;
	printf("Write three numeral : ");

	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 > num2)
	{
		if (num2 > num3)
		{
			max = num1;
			min = num3;
		}
		else if (num3 > num1)
		{
			max = num3;
			min = num2;
		}
		else
		{
			max = num1;
			min = num2;
		}
	}
	else
	{
		if (num2 < num3)
		{
			max = num3;
			min = num1;
		}
		else if (num3 < num1)
		{
			max = num2;
			min = num3;
		}
		else
		{
			max = num2;
			min = num1;
		}
	}
	printf("Max : %d\n", max);
	printf("Min : %d\n", min);
	system("pause");
	return 0;
}