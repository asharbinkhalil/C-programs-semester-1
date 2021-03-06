#include<stdio.h>
main()
{
	int num,a,b,c,d,e;
	printf("\t\tTHIS PROGRAM WILL CHECK DIVISION IF ANY OF THE OUTPUT IS 7,-7 OR ZERO:\n");
	printf("Enter Any Number:\n");
	scanf("%d",&num);
	a=num%10;
	b=num/10;
	c=(b-(a*2));
	printf("%d\n",c);
	if (c==-7 || c==7 || c==0)
	printf("The number is divisible by 7: IGNORE ANY FURTHER RESULTS:\n");
	a=c%10;
	b=c/10;
	d=(b-(a*2));
	printf("%d\n",d);
	if (d==-7 || d==7 || d==0)
	printf("The number is divisible by 7: IGNORE ANY FURTHER RESULTS: \n");
	a=d%10;
	b=d/10;
	e=(b-(a*2));
	printf("%d\n",e);
	if (e==-7 || e==7 || e==0)
printf("The number is divisible by 7: IGNORE ANY FURTHER RESULTS: \n");
}
