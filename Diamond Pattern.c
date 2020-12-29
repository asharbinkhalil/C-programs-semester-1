#include<stdio.h>
void pattern(int n);
main()
{
	int n;
	printf("Enter the number of rows:");
	scanf("%d",&n);
	pattern(n);
}
void pattern(int n)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if (i<(n-1)-j)
			printf(" ");
			else
			printf("* ");
		}
		printf("\n");
	}
	for(i=0; i<n-1; i++)
	{
		for(j=n-1; j>=0; j--)
		{
			if(i>(n-2)-j)
			printf(" ");
			else
			printf("* ");
		}
		printf("\n");
	}
}
