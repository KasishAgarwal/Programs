#include<stdio.h>
int main()
{
	long int n , m ;
	int arr[10000],k=0,i,j,count=0;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=n;i<=m;i++)
	{
		count=0;
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			{
				count+=1;
			}
		}
		if(count==1)
		{
			arr[k]=i;
			k++;
		}
	}
	count=0;
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(arr[j]-arr[i]==6)
			{
				count++;
			}
		}
	}
	printf("%d",count);
}
