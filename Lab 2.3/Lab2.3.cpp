#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter number : ");
	scanf("%d", &x);
	for (int i = 1; i <= x-1; i++)
	{	
		if (i == 1)
		{	
			for (int n = 1; n <= x - 1; n++)
			{
				printf("*");
			}
			for (int m = 1; m <= x-1; m++)
			{
				printf("*\n");
				if (m <= x-2)
				{
					printf("*");
					for (int k = 0; k <= x-3; k++)
					{
						printf(" ");
					}					
				}   
			}
			for (int j = 1; j <= x ; j++)
			{
				printf("*");			
			}			
		}		
	}
		return 0;
}