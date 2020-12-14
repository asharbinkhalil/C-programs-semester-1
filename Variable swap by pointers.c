#include <stdio.h>
void function (int  *pa, int *pb)
{
	int temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}

int main()
{
	int a=5,b=2,*pa,*pb;
	pa=&a;
	pb=&b;
	printf("value before swap is %d  %d\n",*pa,*pb);
	function(&a,&b);
	printf("value before swap is %d  %d",*pa,*pb);				
}

