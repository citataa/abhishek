   //to find weather the no. is palindrome or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,r=0,temp;
cout<<"enter the no. to check";
cin>>n;
temp=n;
while(temp!=0)
{
r=r*10;
r=r+temp%10;
temp=temp/10;
}
if(n==r)
{
cout<<"palindrome no.";
}
else
cout<<"not palindrome" ;
getch();
}