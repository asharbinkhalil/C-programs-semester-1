#include<stdio.h>
main()
{
	int n,a=0,avg=0,i,count=0,max=0,min=100;
	printf("Enter the students:");
	scanf("%d",&n);
	int arr[n];
	for(i=0; i<n; i++)
	{
		printf("Enter marks for student %d :",i+1);
		scanf("%d",&arr[i]);
		a=arr[i]+a;
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]<4)
		count++;
 	}
		avg=a/n;
	system("cls");
printf("%d is students average\n",avg);		
printf("%d is students max\n",max);
printf("%d is students min\n",min);
printf("%d is students failed\n",count);
}			
