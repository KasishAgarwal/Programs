#include<stdio.h>
#include<string.h>
int main()
{
	char A[50],B[50],a;
	int i,k,flag=0,count=0,size;
	scanf("%s ",&A);
	scanf("%s",&B);
	if(strlen(A)==strlen(B))
		i=0;
	else
		printf("error");

	for(i=0;i<strlen(A);i++)
	{
		if(A[0]!=B[0])
		{
		a=A[0];
		for(k=0;k<strlen(A)-1;k++)
		{
			A[k]=A[k+1];

		}
		A[strlen(A)-1]=a;
		}
		else
        {
			flag=1;
		}

	}

	if(flag==1)
	{
		for(i=0;i<strlen(A);i++)
		{
			if(A[i]==B[i])
			{
				count+=1;
			}
		}
	}

	if(strlen(A)==count)
	{printf("True");}
	else
	{printf("False");}
}
