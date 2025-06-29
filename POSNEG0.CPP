// Check whether a Number is Positive Negative or Zero

#include <iostream.h>
#include <conio.h>
main()
{
int a;
clrscr();
cout<<"Enter the Number   ";
cin>>a;
if (a>0)
cout<<"The Number is Positive";
else
if (a<0)
cout<<"The Number is Negative";
else
cout<<"The Number is Zero";
getch();
}