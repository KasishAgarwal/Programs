#include<stdio.h>
int main()
{
    int N,holes[50],M,balls[1000],answer[1000],i,k=1,count[50],flag=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&holes[i]);
    }
    scanf("%d",&M);
    for(i=1;i<=M;i++)
    {
        scanf("%d",&balls[i]);
    }
    for(i=1;i<=M;i++)
    {
        if(flag==-1)
        {
            answer[k]=0;
            k++;
        }
        flag=0;
        for(int j=N;j>0;j--)
        {

        if(balls[i]<=holes[j]&&(flag==0||flag==-1))
        {   flag=-1;
            if(count[j]<j)
            {
            answer[k]=j;
            k++;
            count[j]+=1;
            flag=1;
            break;
            }
        }
        }
    }
    for(i=1;i<=M;i++)
    {
    printf("%d ",answer[i]);
    }
}
