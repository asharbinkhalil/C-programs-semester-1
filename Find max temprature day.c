#include<stdio.h>
main()
{
	int arr[7],max,min,i;
	char carr[7][19]={"monday","tuesday","wednesday","Thrusday","Friday","saturday","Sunday"};
	for(i=0; i<7; i++)
	{
	
	printf("Enter tempratures on day %d\n",i+1);
	scanf("%d",&arr[i]);	
}
max=arr[0];
min=arr[0];
	for(i=0; i<7; i++)
	{
	if(arr[i]>max)
	max=arr[i];
	else if(arr[i]<min)
	min=arr[i];
	}
		for(i=0; i<7; i++)
	{
	if(arr[i]==min)
	printf("min %d is at %s position\n",min,carr[i]);
		if(arr[i]==max)
	printf("max %d is at %s position\n",max,carr[i]);
}
	
	printf("%d min and %d max",min,max);}
