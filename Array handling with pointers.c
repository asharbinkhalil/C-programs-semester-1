#include <stdio.h>
main()
{
	char arr[1000];
	printf("Enter any string:   ");
	scanf("%s",arr);
	char *parr;
	parr=&arr;
	printf("character at first element af array is: %c\n",*parr);
	printf("Adress of first element of array id %d\n",parr);
	printf("ASCII value of first Character of array id %d\n",*parr);
	parr++;
	printf("\ncharacter at second element af array is: %c\n",*parr);
	printf("Adress of second element of array id %d\n",parr);
	printf("ASCII value of second Character of array id %d\n",*parr);
	
		
	
		
}
  
  
