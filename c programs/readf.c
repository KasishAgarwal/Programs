#include<stdio.h>
#include<stdlib.h>
struct book
{
int bookid;
char title[20];
float price;
};
void main()
{
struct book b1;
FILE *fp;
fp=fopen("abc.txt","rb");
if(fp==NULL)
{
printf("File not found");
exit(1);
}
while(fread(&b1,sizeof(b1),1,fp)>0)
{
printf("%d %s %f \n",b1.bookid,b1.title,b1.price);
}
fclose(fp);
getch();
}
