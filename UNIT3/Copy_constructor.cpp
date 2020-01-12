#include<iostream>
using namespace std;
class copy1
{
    int x,y;
    public:
    copy1(int a,int b)
    {
        x=a;
        y=b;
    }

    copy1(copy1 &obj1)
    {
    x=obj1.x;
    y=obj1.y;
    }
    void display()
    {
        cout<<"\n Values of x and y are:"<<x<<" "<<y;
    }

};
int main()
{
    copy1 obj1(2,5);
    obj1.display();
    copy1 obj2(obj1);//Copy Constructor is called
    obj2.display();
    copy1 obj3=obj1;//Second way of calling copy constructor
    obj3.display();
    return 0;
}
