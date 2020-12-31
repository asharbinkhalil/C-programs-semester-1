#include<stdio.h>
#include<string.h>
#include<time.h>
struct article
{
	int id,issue,s_page,e_page,year;
	char author[20],journal[20],title[30];
};
void main()
{	
	FILE *fptr;
	fptr = fopen("abcd.bin", "wb");
			if ( fptr == NULL )
				puts("cannot open file");
	int i,n,acount=0;
	printf("Enter number of articles you want to write: ");
	scanf("%d",&n);
struct article *ptr;
	ptr=(struct user*) malloc(n * sizeof(struct article));
			for(i=0; i<n; i++)
			{
				printf("Id: %d\n",i+1);
				printf("Enter title: ");
				scanf("%s",(ptr+i)->title);
				printf("Enter journal: ");
				scanf("%s",(ptr+i)->journal);
				printf("Issue: ");
				scanf("%d",&(ptr+i)->issue);
				printf("Year: ");
				scanf("%d",&(ptr+i)->year);
				printf("Start page:");	
				scanf("%d",&(ptr+i)->s_page);
				printf("End page: ");
				scanf("%d",&(ptr+i)->e_page);
				printf("Enter author: ");
				scanf("%s",(ptr+i)->author);
	fwrite(&ptr,sizeof(struct article),1,fptr);
			}
	fclose(fptr);
	system("cls");
	fptr=fopen("abcd.bin","rb");
void checkauthor(struct article par)
{
			for(i=0; i<n; i++)
			{
				int zz;
				zz=strcmp((ptr+i)->author,"Robert");
					if(zz==0)
						{
						puts("Enter the New Name of author:");
						fptr = fopen("abcd.bin", "wb");
						scanf("%s",(ptr+i)->author);
						fwrite(&ptr,sizeof((ptr+i)->author),1,fptr);
						fclose(fptr);
						}
					else
						printf("No such author found:");
			}
}
	int m;
	printf("Enter number of articles to read:");
	scanf("%d",&m);
	checkauthor(*ptr);
			for(i=0; i<m; i++)
			{
				fread(&ptr,sizeof(struct article),1,fptr);
				printf("\t\t\t\t-------Book %d Information:--------\n\n\n",i+1);
				sleep(1);
				printf("Message of the day: Respect Elders\n");
				sleep(2);
				printf("\t----ID is:       %d\n",i+1);
				printf("\t----Title is:    %s\n",(ptr+i)->title);
				printf("\t----Journal is:  %s\n",(ptr+i)->journal);
				printf("\t----Issue is on: %d\n",(ptr+i)->issue);
				printf("\t----Year is:     %d\n",(ptr+i)->year);
				printf("\t----Start page:  %d\n",(ptr+i)->s_page);
				printf("\t----End page is: %d\n",(ptr+i)->e_page);
				printf("\t----Author is:   %s\n\n",(ptr+i)->author);
			}
void articlecount (struct article par)
{
			for(i=0; i<n; i++)
				{
					if((ptr+i)->year>2000 || (ptr+i)->e_page>=200 )
					acount++;
				}	
					printf("\nArticles with greater pages and  year than 200 and 2000 respectively are %d\n\n\n",acount);
}
articlecount(*ptr);
void journal_information (struct article par)
{
	int i,jn;
	printf("Enter the number of Journal information you want to print:");
	scanf("%d",&jn);
			for(i=0; i<jn; i++)
				{
					printf("\t----Author %d is:   %s\n",i+1,(ptr+i)->author);
				}
}
journal_information(*ptr);
fclose(fptr);
}
