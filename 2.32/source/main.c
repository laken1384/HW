#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int w;
	double bmi,h;
	printf("Enter your weightKilograms : ");  
	scanf_s("%d", &w );
	printf("Enter your heightInMeters : ");  
	scanf_s("%lf", &h );
	bmi = (double)w/h/h;
	if (bmi <= 18.5) printf("Underweight");
	if (bmi >=18.5&&bmi<=24.9) printf("Normal");
	if (bmi >= 25&&bmi<=29.9) printf("Overweight");
	if (bmi >=30) printf("Obese");
	printf(" : %f", bmi);
	printf("\n");
	system("pause");
	return 0;
}