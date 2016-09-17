   //factorial of a no. using do while statement
#include<iostream.h>
#include<conio.h>
void main()
{
long int i,n,f=1;
clrscr();
cout<<"enter the value for which the factorial to be find";
cin>>n;
 i=1;
 do
{
f*=i;
i++;
}
while(i<=n);
cout<<"factorials of the no."<<f;
getch();
}
