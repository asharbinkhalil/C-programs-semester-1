#include<stdio.h>
main()
{
	int bmi,w,h;
	printf("Enter the weight in pounds: ");
	scanf("%d",&w);
	printf("Enter the height in inches: ");
	scanf("%d",&h);
	bmi=(w*706)/(h*h);
	printf("%d is your BMI:\n",bmi);
if (bmi<15)
printf("Starvation    ");
if (bmi>15 && bmi<17)
printf("Anorexic    ");

if (bmi>17 && bmi<18)
printf("Under weight    ");

if (bmi>18 && bmi<25)
printf("Ideal    ");

if (bmi>25 && bmi>30)
printf("Overweight    ");

if (bmi>30 && bmi>40)
printf("Obese    ");

if (bmi>40)
printf("Morbidly Obese    ");
}
