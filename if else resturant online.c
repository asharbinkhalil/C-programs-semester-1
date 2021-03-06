#include<stdio.h>
main()
{
	int order_amount=0,quantity,bill=0;
	char order_type,more_orders;
	printf("\t\t  KHUSH AAMDEED:\n\n");
	printf("Please select from the menu given:\n");
	printf("\tB=  Burger         RS 200\n");
	printf("\tF=  French fries   RS 50\n");
	printf("\tP=  Pizza          RS 500\n");
	printf("\tS=  Sandwiches:    RS 150\n");
	printf("Enter How Many types of snacks you want to order:\n");
	scanf("%d",&order_amount);
	printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=200*quantity;
	if(order_type=='F')
		bill=50*quantity;
	if(order_type=='P')
		bill=500*quantity;
	if(order_type=='S')
		bill=150*quantity;
	if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);
	}
	if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);}
		if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);}
	printf("Do you want to place any More Orders:(y/n)\n");
	scanf(" %c",&more_orders);
	if(more_orders=='y')
	{
			printf("Enter How Many types of snacks you want to order:\n");
	scanf("%d",&order_amount);
	printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);
	if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);
	}
	if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);}
		if(order_amount>0)
	{
		printf("Enter Choice From the menu\n");
	order_amount--;
	scanf(" %c",&order_type);
	printf("Enter Quatity\n");
	scanf("%d",&quantity);
	if(order_type=='B')
		bill=bill+(200*quantity);
	if(order_type=='F')
		bill=bill+(50*quantity);
	if(order_type=='P')
		bill=bill+(500*quantity);
	if(order_type=='S')
		bill=bill+(150*quantity);}
	}
printf("%d is the bill of what you ordered:\n",bill);
printf("Please Pay the Bill\n");
printf("Have A Nice Day:` Thank You:\n");}
