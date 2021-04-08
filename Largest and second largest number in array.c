/*Write a C program to find largest and second largest element in an array. How to find second
largest element in array in C programming language. Logic to find second largest element in array
in C program.*/
#include<stdio.h>
main()
{
int arr[7],i,sl,l;

for(i=0; i<7; i++)
	scanf("%d",&arr[i]);
if(arr[0]>arr[1])
{
	l=arr[0];
	sl=arr[1];
}
if(arr[0]<arr[1])
{
	l=arr[1];
	sl=arr[0];
}

for(i=2; i<7; i++)
{
	if(arr[i]>l)
	{
	sl=l;
	l=arr[i];
}
else if(arr[i]>sl)
	sl=arr[i];
}
printf("%d  large\n   %d is second large",l,sl);
}
