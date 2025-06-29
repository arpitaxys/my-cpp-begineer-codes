// Greatest between 3 Numbers Ver 1

#include <iostream.h>
#include <conio.h>
main()
{
int a,b,c;
clrscr();
cout<<"Enter the 3 Numbers  ";
cin>>a>>b>>c;
if (a>b)
{
if (a>c)
cout<<"A is the Greatest";
else
cout<<"C is the Greatest";
}
else
if (b>c)
cout<<"B is the Greatest";
else
cout<<"C is the Greatest";
getch();
}