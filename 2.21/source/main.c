#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j;
	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if ((i == 0) || (i == 8) || (j == 0) || (j == 8)) printf("*");
			else printf(" ");
		}
		printf("         ");
		for (j = 0; j <= 8; j++)
		{
			switch (i)
			{
			case 0:
				if ((j == 3) || (j == 4) || (j == 5)) printf("*");
				   else printf(" ");
				   break;
			case 1: 
				if ((j == 1) || (j == 7)) printf("*");
				else printf(" ");
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if ((j == 0) || (j == 8)) printf("*");
				   else printf(" ");
				   break;
			case 7:
				if ((j == 1) || (j == 7)) printf("*");
				   else printf(" ");
				   break;
			case 8:
				if ((j == 3) || (j == 4) || (j == 5)) printf("*");
				   else printf(" ");
				   break;
			}
		}
		
		printf("         ");
		for (j = 0; j <= 8; j++)
		{
			switch (i)
			{
			case 0:
				if (j == 4)printf("*");
				else printf(" ");
				break;
			case 1:
				if ((j == 3) || (j == 4) || (j == 5)) printf("*");
				else printf(" ");
				break;
			case 2:
				if ((j == 2) || (j == 3) || (j == 4) || (j == 5) || (j == 6)) printf("*");
				else printf(" ");
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (j == 4) printf("*");
				else printf(" ");
				break;
			}
		}
		printf("         ");
		for (j = 0; j <= 8; j++)
		{
			switch (i)
			{
			case 0:
				if (j == 4)printf("*");
				else printf(" ");
				break;
			case 1:
				if ((j == 3) || (j == 5)) printf("*");
				else printf(" ");
				break;
			case 2:
				if ((j == 2) || (j == 6)) printf("*");
				else printf(" ");
				break;
			case 3:
				if ((j == 1) || (j == 7)) printf("*");
				else printf(" ");
				break;
			case 4:
				if ((j == 0) || (j == 8)) printf("*");
				else printf(" ");
				break;
			case 5:
				if ((j == 1) || (j == 7)) printf("*");
				else printf(" ");
				break;
			case 6:
				if ((j == 2) || (j == 6)) printf("*");
				else printf(" ");
				break;
			case 7:
				if ((j == 3) || (j == 5)) printf("*");
				else printf(" ");
				break;
			case 8:
				if (j == 4) printf("*");
				else printf(" ");
				break;
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}