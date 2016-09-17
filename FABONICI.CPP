   //fabonicci series
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r , first=0, second=1,f=0;
cout<<"enter the rangeof fabonicci series";
cin>>r;
for (int c=0;c<r;c++)
{
if(c<=1)
f=c;
else
{f=first+second;
first=second;
second=f;
}
cout<<f<<" ";
}
getch();
}