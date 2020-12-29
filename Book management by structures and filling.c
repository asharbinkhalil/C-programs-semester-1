#include<stdio.h>
#include<string.h>
struct article
{
	int id,issue,s_page,e_page,year;
	char author[20],journal[20],title[30];
};
main()
{	
FILE *fptr;
fptr = fopen("abcd.bin", "wb");
if ( fptr == NULL )
{
puts("cannot open file");
}
int i,n;
printf("Enter number of articles:");
scanf("%d",&n);
struct article *ptr;
ptr=(struct user*) malloc(n * sizeof(struct article));
for(i=0; i<n; i++)
{
	

printf("Id: %d\n",i+1);
printf("Enter title");
scanf("%s",(ptr+i)->title);
printf("Enter journal: ");
scanf("%s",(ptr+i)->journal);
printf("Issue");
scanf("%d",&(ptr+i)->issue);
printf("Year");
scanf("%d",&(ptr+i)->year);
printf("Start page:");
scanf("%d",&(ptr+i)->s_page);
printf("end page :");
scanf("%d",&(ptr+i)->e_page);
printf("enter author");
scanf("%s",(ptr+i)->author);
fwrite(&ptr,sizeof(struct article),1,fptr);
}
fclose(fptr);
system("cls");
fptr=fopen("abcd.bin","rb");
for(i=0; i<n; i++){

	fread(&ptr,sizeof(struct article),1,fptr);
printf("%d\n",i+1);
printf("%s\n",(ptr+i)->title);
printf("%s\n",(ptr+i)->journal);
printf("%d\n",(ptr+i)->issue);
printf("%d\n",(ptr+i)->year);
printf("%d\n",(ptr+i)->s_page);
printf("%d\n",(ptr+i)->e_page);
printf("%s\n",(ptr+i)->author);
}
fclose(fptr);
}
