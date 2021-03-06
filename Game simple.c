#include<stdio.h>
main()
{
	char card;
	int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,cdata=0,cardu,cdatau=0,cvalue=0,uvalue=0,climit=0,ulimit=0,ccardlimit=3,ucardlimit=3;
	printf("\t\t This game will collect cards from two ends simultaneuously and then give the winning person score:\n");
	printf("Cards name and Values are as: a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8 \n\n");
	printf("Enter Card from Computer: \n");
	scanf("%c",&card);
	ccardlimit--;
	if (card=='a')
	{card=1;
	cdata=cdata+card;}
	if (card=='b')
	{card=2;
	cdata=cdata+card;}
	if (card=='c')
	{card=3;
	cdata=cdata+card;}
	if (card=='c')
	{card=4;
	cdata=cdata+card;}
	if (card=='e')
	{card=5;
	cdata=cdata+card;}
	if (card=='f')
	{card=6;
	cdata=cdata+card;}
	if (card=='g')
	{card=7;
	cdata=cdata+card;}
	if (card=='h')
	{card=8;
	cdata=cdata+card;}
		printf("Enter Card you: \n");
	scanf(" %c",&cardu);
	ucardlimit--;
	if (cardu=='a')
	{cardu=1;
	cdatau=cdatau+cardu;}
	if (cardu=='b')
	{cardu=2;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=3;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=4;
	cdatau=cdatau+cardu;}
	if (cardu=='e')
	{cardu=5;
	cdatau=cdatau+cardu;}
	if (cardu=='f')
	{cardu=6;
	cdatau=cdatau+cardu;}
	if (cardu=='g')
	{cardu=7;
	cdatau=cdatau+cardu;}
	if (cardu=='h')
	{cardu=8;
	cdatau=cdatau+cardu;}
	printf("Enter Card from Computer: \n");
	scanf(" %c",&card);
	ccardlimit--;
	if (card=='a')
	{card=1;
	cdata=cdata+card;}
	if (card=='b')
	{card=2;
	cdata=cdata+card;}
	if (card=='c')
	{card=3;
	cdata=cdata+card;}
	if (card=='c')
	{card=4;
	cdata=cdata+card;}
	if (card=='e')
	{card=5;
	cdata=cdata+card;}
	if (card=='f')
	{card=6;
	cdata=cdata+card;}
	if (card=='g')
	{card=7;
	cdata=cdata+card;}
	if (card=='h')
	{card=8;
	cdata=cdata+card;}
		printf("Enter Card you: \n");
	scanf(" %c",&cardu);
	ucardlimit--;
	if (cardu=='a')
	{cardu=1;
	cdatau=cdatau+cardu;}
	if (cardu=='b')
	{cardu=2;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=3;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=4;
	cdatau=cdatau+cardu;}
	if (cardu=='e')
	{cardu=5;
	cdatau=cdatau+cardu;}
	if (cardu=='f')
	{cardu=6;
	cdatau=cdatau+cardu;}
	if (cardu=='g')
	{cardu=7;
	cdatau=cdatau+cardu;}
	if (cardu=='h')
	{cardu=8;
	cdatau=cdatau+cardu;}

	if(cdata>cdatau)
{
				cvalue=cvalue+cdata;}
	else
	{
			uvalue=uvalue+cdatau;}
	printf("%d is value of computer scores\n",cvalue);
	printf("%d is value of user scores\n",uvalue);
	if(ccardlimit>0)
	{
		printf("Enter Card firom Computer: \n");
	scanf(" %c",&card);
	cdata=0;
	if (card=='a')
	{card=1;
	cdata=cdata+card;}
	if (card=='b')
	{card=2;
	cdata=cdata+card;}
	if (card=='c')
	{card=3;
	cdata=cdata+card;}
	if (card=='c')
	{card=4;
	cdata=cdata+card;}
	if (card=='e')
	{card=5;
	cdata=cdata+card;}
	if (card=='f')
	{card=6;
	cdata=cdata+card;}
	if (card=='g')
	{card=7;
	cdata=cdata+card;}
	if (card=='h')
	{card=8;
	cdata=cdata+card;}	
	}
	if(ucardlimit>0)
	{
		printf("Enter Card you: \n");
	scanf(" %c",&cardu);
	cdatau=0;
	if (cardu=='a')
	{cardu=1;
	cdatau=cdatau+cardu;}
	if (cardu=='b')
	{cardu=2;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=3;
	cdatau=cdatau+cardu;}
	if (cardu=='c')
	{cardu=4;
	cdatau=cdatau+cardu;}
	if (cardu=='e')
	{cardu=5;
	cdatau=cdatau+cardu;}
	if (cardu=='f')
	{cardu=6;
	cdatau=cdatau+cardu;}
	if (cardu=='g')
	{cardu=7;
	cdatau=cdatau+cardu;}
	if (cardu=='h')
	{cardu=8;
	cdatau=cdatau+cardu;}
	}
	if(cvalue>cdatau)
{
				cvalue=cvalue+cdata;
				printf("%d is value of computer scores\n",cvalue);
				printf("Computer Won:\n");}
	else
	{
			uvalue=uvalue+cdatau;
			printf("%d is value of user scores\n",uvalue);
		printf("you Won:\n");}
}
