#include <iostream>
using namespace std;
int main()
{
int g;
cout<< "Input year =>";
cin>> g;
if (((g%4==0)&&(g%100!=0))||(g%400==0))
cout<< "Leap year"<< endl;
else
cout<< "The year is not leap"<< endl;
return 0;
}
