#include<iostream>
using namespace std;

char str[10],b,r,s;
int a=0,c=0,k=1,g=1,x,p,q,n;
float ans;
int access1(int);
int access2(char);
int access3(int);
int main()
{
do
{
str[0]='\0';
a=0;
c=0;
k=1;
g=1;
ans=0;
cout<<"==>  ";
cin>>str;
for(int i=0;str[i]!='\0';i++)
{
char w=str[i];
if(w=='0'||w=='1'||w=='2'||w=='3'||w=='4'||w=='5'||w=='6'||w=='7'||w=='8'||w=='9')
{
access1(str[i]);
}
else
{
n=i;
goto nxt;
}
}

nxt:
for(int l=n;str[l]!='\0';l++)
{
char w=str[l];
if(w=='+'||w=='-'||w=='*'||w=='/'||w=='%')
{
access2(str[l]);
}
else
{
x=l;
goto next;
}
}

next:
for(int m=x;str[m]!='\0';m++)
{
char w=str[m];
if(w=='0'||w=='1'||w=='2'||w=='3'||w=='4'||w=='5'||w=='6'||w=='7'||w=='8'||w=='9')
{
access3(str[m]);
}
}

if(b=='+')
ans=a+c;
if(b=='-')
ans=a-c;
if(b=='*')
ans=a*c;
if(b=='/')
ans=a/c;
if(b=='%')
ans=a%c;
cout<<ans;
cout<<"\n\nwant to do more ????   enter   (y/n)  \n";
cin>>s;
cout<<"\n";
}
while(s=='y');
}
int access1(int p)
{
p=p-48;
a=p+(a*k);
k=10;

}

int access2(char r)
{
b=r;
}

int access3(int q)
{
q=q-48;
c=q+(c*g);
g=10;

}
