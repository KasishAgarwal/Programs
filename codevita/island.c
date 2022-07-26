#include<stdio.h>
int d;
int distance(int,int,int,int);
int main()
{
    int N,coor[10000][4],a,b,x1,x2,y1,y2,dist[10000][4],i,j,minimum[10000],index[10000],temp;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<4;j++)
        {
         scanf("%d",&coor[i][j]);
        }
    }
    scanf("%d %d",&a,&b);
     for(i=0;i<N;i++)
    {
        x1=coor[i][0];
        y1=coor[i][1];
        x2=coor[i][2];
        y2=coor[i][3];
        dist[i][0]=distance(x1,y1,a,b);
        dist[i][1]=distance(x2,y2,a,b);
        dist[i][2]=distance(x1,y2,a,b);
        dist[i][3]=distance(x2,y1,a,b);
    }

int min,min1,min2,var1,var2;
for(i=0;i<N;i++)
{
    var1=dist[i][0];
    var2=dist[i][1];
    if(var1<var2)
    {
        min1=var1;
    }
    else
    {
            min1=var2;
    }

    var1=dist[i][2];
    var2=dist[i][3];
    if(var1<var2)
    {
        min2=var1;
    }
    else
    {
            min2=var2;
    }

    if(min1<min2)
    {
        min=min1;
    }
    else
    {
        min=min2;
    }
   minimum[i]=min;
}

for(i=0;i<N;i++)
{
    index[i]=i+1;
}


    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-i-1;j++)
        {
            if(minimum[j]>minimum[j+1])
            {
                temp=minimum[j];
                minimum[j]=minimum[j+1];
                minimum[j+1]=temp;

                temp=index[j];
                index[j]=index[j+1];
                index[j+1]=temp;
            }

        }
    }


for(i=0;i<N;i++)
{
    printf("%d ",index[i]);
}

}


int distance(int p,int q,int r,int s)
{
    if(p>r&&q>s)
        {
            d=(p-r)+(q-s);
        }
        if(p>r&&q<s)
        {
            d=(p-r)+(s-q);
        }
        if(p<r&&q>s)
        {
            d=(r-p)+(q-s);
        }
        if(p<r&&q<s)
        {
            d=(r-p)+(s-q);
        }
        return d;
}



