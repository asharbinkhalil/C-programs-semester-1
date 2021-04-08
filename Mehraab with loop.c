#include<stdio.h>
main()
{
	int i,j,k;
	printf("Enter rows:");
	scanf("%d",&k);
	for(i=1; i<=k; i++)
	{
		for(j=1; j<=(k+(k-1)); j++)
		{
			if(i+j==(k+1) || (j-i)==(k-1))
			printf("^");
			else
			printf(" ");
		}
		printf("\n");
	}
		for(i=1; i<=k; i++)
	{
		for(j=1; j<=(k+(k-1)); j++)
		{
			if(i+j==(k+1) || (j-i)==(k-1) )
			printf(" ");
			else
			printf("O");
		}
		printf("\n");
	}
}
