#include <stdio.h>
#include<stdbool.h>
bool primenumber (int num)
{
	int i;
	for (i=2; i<=num/2; i++)
	{
		if ((num % i) == 0)
		{
			return false;
		}
	}
	return true;
}
main()
{
	int count,number,i,n;
		printf("Enter max limit");
	scanf("%d",&n);
	for (i=2; i<=n; i++)
	{
		if (primenumber(i))
		{
			printf("%d\n",i);
		}
	}
}



