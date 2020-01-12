//When local variable’s name is same as member’s name
#include<iostream>
using namespace std;
class Test
{
   int x;

public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print()
   {
       cout << "x = " << x << endl;
    cout<<"Address of current object:"<<this<<endl;
   }
};

int main()
{
   Test obj,obj1;
   int x = 20;
   int x1=30;
   obj.setX(x);
   obj.print();
   obj1.setX(x1);
   obj1.print();
   return 0;
}
