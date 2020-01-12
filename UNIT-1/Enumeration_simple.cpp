#include<iostream>
using namespace std;
enum shape
{
	circle=3,rectangle,triangle
};
int main()
{
	shape v1;
	//v1=shape(9);
	v1=rectangle;
	cout<<"value is:"<<v1<<" and memory in bytes is:"<<sizeof(v1)<<endl;
}
