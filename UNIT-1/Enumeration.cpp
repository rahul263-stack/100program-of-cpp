#include<iostream>
using namespace std;
enum shape
{
	circle,rectangle,triangle
};
int main()
{
	int code;
	cout<<"Enter shape code:";
	cin>>code;
	while(code>=circle && code<=triangle)
	{
		switch(code)
		{
			    case circle:
				cout<<"Circle code is entered"<<endl;
				break;
				case rectangle:
				cout<<"Rectangle code is entered"<<endl;
				break;
				case triangle:
				cout<<"Triangle code is entered"<<endl;
		}
		cout<<"Enter shape code:";
		cin>>code;
	}
cout<<"BYE\n";
}
