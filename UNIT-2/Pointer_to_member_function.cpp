#include<iostream>
using namespace std;
class Test
{
public:
void show_msg(int);
};
void Test::show_msg(int a)
{
cout<<"\n Hello World!!!"<<" "<<a;
}
int main()
{
void(Test::*fp)(int);//Return type of function is void and it is not accepting any argument
fp=&Test::show_msg;
Test t;
(t.*fp)(4);//.*(Member dereferencing operator
Test *ptr=new Test;
(ptr->*fp)(6);
}
