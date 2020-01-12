#include<iostream>
#include<conio.h>
using namespace std;
class nest_fun
{
int l,b,area;
public:


void input();
void output(int,int);
};
void nest_fun::input()
{
cout<<"Enter length and breadth of rectangle: ";
cin>>l>>b;
output(l,b);
}
void nest_fun::output(int l,int b)
{
cout<<"Length = "<<l<<" Breadth= "<<b<<endl;
area=l*b;
cout<<"Area of rectangle: "<<area;
}
int main()
{
nest_fun n1;
n1.input();
getch();
return 0;
}
