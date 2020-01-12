//Private Member functions
#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
	int m;
	void read(void);
	public:
		void write(void);
};

void sample::write(void)
{
	cout<<"\nThis is update function";
	read();

}
void sample::read(void)
{
	cout<<"\nThis is read function,but it is called in write because it is private";

}
int main()
{
	sample obj1;
	obj1.write();
}
