#include<stdio.h>
#include<math.h>
float read(int, int, float[50][50]);
float print(int, int, float[50][50]);
float transpose(float[50][50], float[50][50]);
float determinant(int,int,float [50][50]);
float arr1[50][50], arr2[50][50], arr3[50][50],arr4[50][50],sk[50];
int r1, c1, r2, c2, r3, c3,s=0;
float det=0.0,overald=0.0;
float read(int r, int c, float x[][50])
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("Enter no. at [%d][%d]:", i, j);
			scanf("%f", &x[i][j]);
		}
	}
}

float print(int r, int c, float x[][50])
{
	int i, j;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%f   ", x[i][j]);

		}
		printf("\n");
	}
}
float transpose(float x[][50], float arr4[][50])
{
	int i, j;
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			arr4[j][i] =x[i][j]/overald;
		}
	}
}
float determinant(int r,int c,float x[][50])
{
if(r==2&&c==2)
{
det=x[0][0]*x[1][1]-x[0][1]*x[1][0];
}
else if(r==1&&c==1)
{
det=x[0][0];
}
else if(r==3&&c==3)
{
det=x[0][0]*(x[1][1]*x[2][2]-x[1][2]*x[2][1])-x[0][1]*(x[1][0]*x[2][2]-x[1][2]*x[2][0])+x[0][2]*(x[1][0]*x[2][1]-x[1][1]*x[2][0]);
}
else
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
for(int k=0,p=0;k<r,p<r-1;k++)
{
if(k!=i)
{
for(int m=0,q=0;m<c,q<c-1;m++)
{
if(j!=m)
{
arr2[p][q]=x[k][m];
q++;
}
}
p++;
}
}
if(i==0)
{
    if(s<r)
    {
    sk[s]=determinant(r-1,c-1,arr2);
    s++;
    }
}
}
}
det=0;
for(int ksk=0;ksk<r;ksk++)
{

  det+=(pow(-1,ksk)*x[0][ksk]*sk[ksk]);
}
}

return det;
}

int main()
{
printf("\n\nFor matrix Enter no. of rows & column:\n");
scanf("%d%d", &r1, &c1);
printf("\nEnter matrix whose inverse is to be found :\n");
read(r1, c1, arr1);
printf("\nThe matrix is:\n");
print(r1,c1,arr1);
overald=determinant(r1,c1,arr1);
if(overald==0||r1!=c1)
{
    printf("\nInverse can't be found\n");
}
else
{
for(int i=0;i<r1;i++)
{
for(int j=0;j<c1;j++)
{
for(int k=0,p=0;k<r1,p<r1-1;k++)
{
if(k!=i)
{
for(int m=0,q=0;m<c1,q<c1-1;m++)
{
if(j!=m)
{
arr2[p][q]=arr1[k][m];
q++;
}
}
p++;
}
}

det=determinant(r1-1,c1-1,arr2);

arr3[i][j]=pow(-1,i+j)*det;
}
}
r3 = c1;
c3 = r1;
transpose(arr3, arr4);
printf("\nThe inverse of matrix is :\n");
print(r3,c3,arr4);

}
}
