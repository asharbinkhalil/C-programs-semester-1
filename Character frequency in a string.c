#include <stdio.h>
main()
{
	char str[10];
	int i,j;
	printf("Enter string: ");
	scanf("%s",&str);
	char ch;
	printf("Enter character u want to check: ");
	scanf(" %c",&ch);

	for (j=0; str[j]!=NULL; j++)
	{
		if(str[j]==ch)
		i++;
	}
	printf("%d",i);		
	
		
}
  
  
