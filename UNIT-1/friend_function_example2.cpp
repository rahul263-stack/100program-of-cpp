#include<iostream>
#include<conio.h>
using namespace std;
class XYZ;
class ABC
{
	int data_ABC;
	public:
		void setvalue(XYZ obj1);
};
class XYZ
{
	int data_XYZ;
	public:
		void set(int value)
		{
			data_XYZ=value;
		}
		friend void ABC::setvalue(XYZ obj1);
};
        void ABC:: setvalue(XYZ obj1)
		{
			data_ABC=obj1.data_XYZ;
			cout<<"Value is:"<<data_ABC;
		}

int main()
{
	XYZ X;
	ABC A;
	X.set(5);
	A.setvalue(X);
	getch();
	return 0;
}





