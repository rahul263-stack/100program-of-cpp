#include<iostream>
using namespace std;
int main()
{
    int *ptr;//Wild pointer
	int a=10;
    cout<<ptr<<endl;//Gives garbage address value
	cout<<*ptr<<endl;//Gives garbage value stored in the garbage address
	ptr=&a;


	cout<<*ptr;
	return 0;
}
