#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int a;
	int b;
	public:

		void setvalue()
		{
			a=45;
			b=40;
		}
friend float mean(sample s);

};
float mean(sample s)
{
	return float(s.a+s.b)/2.0;
}
int main()
{
	sample X;
	X.setvalue();
	//X.getdata();
	//Y.getdata();
	cout<<"Mean value for object X="<<mean(X)<<"\n";
	//cout<<"Mean value for object Y="<<mean(Y)<<"\n";
	getch();
	return 0;

}
