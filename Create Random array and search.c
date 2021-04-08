#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
int arr[10],i,num;
srand(time(0));
for(i=0; i<10; i++)
{
arr[i]=rand()%10;
}
for(i=0; i<10; i++)
{
printf("%d is at %d\n",arr[i],i);
}
scanf("%d",&num);
for(i=0; i<10; i++)
{
if(arr[i]==num)
{
printf("%d is at %d\n",arr[i],i);
}
}
}
