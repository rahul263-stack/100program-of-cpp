#include<iostream>
using namespace std;
class abc_parameter
{
    int x,y;
    public:

    abc_parameter(int a,int b):x(a),y(b){};
    void display()
    {
        cout<<"\n Values of x and y are:"<<x<<" "<<y;
    }

};
int main()
{
   //abc_parameter obj1(2,3),obj2(4,5);
    abc_parameter obj1=abc_parameter(2,3);
    abc_parameter obj2=abc_parameter(4,5);
    obj1.display();
    obj2.display();
    return 0;
}
