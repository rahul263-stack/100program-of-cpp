//Some key features:
//It is initialized to zero when the first object of its class is created
//Only one copy is created, which is shared by all objects
//It is visible only within the class,but the lifetime is entire program
#include<iostream>
#include<conio.h>
using namespace std;
class Sample
{
	 static int count;
	public:
		void show_count()
		{
          cout<<"\n COUNT="<<++count;
		}
};
int Sample::count;
int main()
{
	Sample s1,s2,s3;
	s1.show_count();
	s2.show_count();
	s3.show_count();
}









