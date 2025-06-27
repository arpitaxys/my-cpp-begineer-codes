// Swap 2 Numbers

#include <iostream.h>
#include <conio.h>
main()
{
int a,b,c;
clrscr();
cout<<"Enter your 2 Numbers";
cin>>a>>b;
c=a;
a=b;
b=c;
cout<<"Swapped Numbers =";
cout<<a<<"  "<<b;
getch();
}