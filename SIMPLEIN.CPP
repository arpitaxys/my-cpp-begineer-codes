// Calculate Simple Interest

#include <iostream.h>
#include <conio.h>
main()
{
float p,r,t,i;
clrscr();
cout<<"Enter the Principal, Rate of Interest and Time Period   ";
cin>>p>>r>>t;
i=(p*r*t)/100;
cout<<"The Simple Interest is   ";
cout<<i;
getch();
}