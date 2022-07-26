#include<stdio.h>
int main()
{
    int T,test[15],answer[15][10^15],i,j,k=0,size[15];
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&test[i]);
    }

    for(i=1;i<=T;i++)
    {
        k=0;
        for(j=1;j<=test[i];j++)
        {
            if((test[i]%j)==0)
            {
                answer[i][k]=j;
                k++;
                size[i]=k;
            }

        }

    }
     for(i=1;i<=T;i++)
    {
        for(j=0;j<size[i];j++)
        {
            printf("%d ",answer[i][j]);
        }
        printf("\n");
    }

}
