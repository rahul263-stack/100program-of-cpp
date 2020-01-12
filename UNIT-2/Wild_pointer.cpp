#include<iostream>
using namespace std;
int main()
{
    int *ptr;//Wild pointer
	int a=10;
    cout<<ptr<<endl;//Gives garbage address value
	cout<<*ptr<<endl;//Gives garbage value stored in the garbage address
	ptr=&a;//Now ptr is not a wild pointer


	cout<<*ptr;
	return 0;
}
