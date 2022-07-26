#include<stdio.h>
void primee();
int n,arr[1000],count=0,prime[1000],index=0,mm;
void primee()
{
    for(int j=2;j<1000;j++)
        {
                count=0;
                for(int k=2;k<=j;k++)
                {
                    if(j%k==0)
                    {
                        count++;
                    }
                }
            if(count==1)
            {
                prime[index]=j;
                index++;
            }
        }
}
int main()
{
   scanf("%d",&n);

primee();
   for(int i=0;i<n;i++)
     {
        if(i%2==0)
        {
            if(i==0)
            {
                arr[i]=1;
            }
            else if(i==2)
            {
                arr[i]=1;
            }
            else
            {
                arr[i]=arr[i-2]+arr[i-4];
            }
        }

        else{
                mm=(i-1)/2;
            arr[i]=prime[mm];
            }
}

printf("%d",arr[n-1]);

}
