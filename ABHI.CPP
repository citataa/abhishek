   //to print the next prime no.
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,flag=0;
cout<<" enter a no.";
cin>>n;
for(i=n+1;i<=100;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
break;
}
}
if (flag==0)
{
cout<<" the next prime no. is "<<i;
break;
}
flag=0;
}
getch();
}