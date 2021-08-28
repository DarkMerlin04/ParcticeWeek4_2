#include<stdio.h>
int main()
{
	int x;
	printf("Input Integer : ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= x; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}