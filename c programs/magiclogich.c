#include<stdio.h>
#include<math.h>
main()
{
    char str[20];
    int i,n,j,k;
    FILE *fp;
    fp=fopen("f1.txt","w");
    for(i=1;i<=100;i++)
    {
        n=i;
        fprintf(fp,"%d - ",i);
        while(n!=0)
        {
            for(j=0;pow(2,j+1)<=n;j++);
            k=pow(2,j);
            putnumber(k,i);
            fprintf(fp,"%d  ",k);
            n=n-pow(2,j);
        }
        fputs("\n",fp);
    }
    fclose(fp);
}
void putnumber(int k,int i)
{
    FILE *fp;
    switch(k)
    {
        case 64:fp=fopen("64.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 32:fp=fopen("32.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 16:fp=fopen("16.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 8:fp=fopen("8.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 4:fp=fopen("4.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 2:fp=fopen("2.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
                break;
        case 1:fp=fopen("1.txt","a");
                fprintf(fp,"%d ",i);
                fclose(fp);
    }
}
