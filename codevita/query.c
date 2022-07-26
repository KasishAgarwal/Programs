#include<stdio.h>
int main()
{
    int N,Q,query[10000],answer[10000],i;
    char *alpha;
    scanf("%d",&N);
    alpha=(char*)malloc(N*sizeof(char));
    scanf("%s",alpha);
    scanf("%d",&Q);

    for(i=1;i<=Q;i++)
    {
        scanf("%d",&query[i]);

    }
    for(i=1;i<=Q;i++)
    {
        for(int j=0;j<query[i]-1;j++)
    {

         if(alpha[(query[i]-1)]==alpha[j])
         {
             answer[i]+=1;

         }

    }
    }
    for(i=1;i<=Q;i++)
    {
      printf("%d\n",answer[i]);
    }

}
