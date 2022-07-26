#include<stdio.h>
int main()
{
    int N,radius[100000],i,j,temp,flag[100000],visible[100000],karn,audit=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
      scanf("%d",&radius[i]);
    }
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(radius[j]>radius[j+1])
            {
                temp=radius[j];
                radius[j]=radius[j+1];
                radius[j+1]=temp;
            }

        }
    }
    for(i=0;i<N-1;i++)
    {
        karn=i;
        label:
        if(audit==-1)
        {
        karn=j;
        audit=0;
        }
        for(j=karn+1;j<N;j++)
        {
            if(radius[karn]<radius[j]&&flag[j]==0&&visible[karn]==0)
            {
                visible[karn]=1;
                flag[j]=1;
                audit=-1;
                goto label;

            }
        }
    }
    int count=0;
     for(i=0;i<N;i++)
    {
        if(visible[i]==1)
        {
            count++;
        }
    }

    printf("%d",N-count);
}
