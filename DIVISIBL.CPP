// The Number is Divisible by a Number

#include <iostream.h>
#include <conio.h>
main()
{
int a,b;
clrscr();
cout<<"Enter the Number to be Checked  ";
cin>>a;
cout<<"Enter the Divisor  ";
cin>>b;
if (a%b==0)
cout<<"The Number is Divisible";
else
cout<<"The Number is not Divisible";
getch();
}