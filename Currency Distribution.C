#include <stdio.h>
void currency(int res);
main()
{
    int M, N;

    printf("Enter Money to be distributed: ");
    scanf("%d", &M);
    printf("Enter number of childrens: ");
    scanf("%d", &N);

    int divided_amount = M/N;
	currency(divided_amount);
	}
	
void currency(int divided_amount)
{

    int hundred_note = 0, fifty_note = 0, twenty_note = 0, ten_note = 0, five_coin = 0, two_coin = 0, one_coin = 0;
    for( ; divided_amount > 0; ){
        if(divided_amount >= 100){
            hundred_note++;
            divided_amount =divided_amount- 100;
        }
        else if(divided_amount >= 50){
            fifty_note++;
            divided_amount =divided_amount- 50;
        }
        else if(divided_amount >= 20){
            twenty_note++;
            divided_amount =divided_amount -20;
        }
        else if(divided_amount >= 10){
            ten_note++;
            divided_amount =divided_amount - 10;
        }
        else if(divided_amount >= 5){
            five_coin++;
            divided_amount = divided_amount-5;
        }
        else if(divided_amount >= 2){
            two_coin++;
            divided_amount = divided_amount -2;
        }
        else if(divided_amount >= 1){
            one_coin++;
            divided_amount =divided_amount -1;
        }
    }
	
    printf("\tNotes Of 100:  %d\t", hundred_note);
	printf("\tNotes of  50:  %d\n\n", fifty_note);
    printf("\tNotes of  20:  %d\t", twenty_note);
    printf("\tNotes of  10:  %d\n\n", ten_note);
    printf("\tCoins of   5:  %d\t", five_coin);
    printf("\tCoins of   2:  %d\n\n", two_coin);
    printf("\t\t       Coins of 1:   %d\t", one_coin);
}
