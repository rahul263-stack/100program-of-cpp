#include<iostream>
using namespace std;
int main()
{
	int *p[4];
	int a,b,c,d,i;
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	p[3]=&d;
	cout<<"\n Enter values:"<<endl;
	for(i=0;i<4;i++)
	{
		cin>>*p[i];
	}
	cout<<"\n Entered values are:"<<endl;
	for(i=0;i<4;i++)
	{
		cout<<"\n"<<*p[i];
	}
}
