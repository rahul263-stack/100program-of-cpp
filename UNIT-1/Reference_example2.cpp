#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a=100;
	int &b=a;
	int &c=b;
	b++;
	cout<<b<<endl;
	b=200;
	cout<<a<<endl;
	cout<<c<<endl;
	getch();
}
