#include<iostream>
using namespace std;
class SimpleArray
{
    int arr[100];
    int n,sum;
public:
    void getdata()
    {
        cout<<"\n Enter the size of array:";
        cin>>n;
        cout<<"\n Enter array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void sum1()
    {
        sum=0;
        for(int i=0;i<n;i++)
        {

             sum=sum+arr[i];
        }
    }
    void display()
    {

        cout<<"Sum is:"<<sum;
    }

};
int main()
{
    SimpleArray obj1;
    obj1.getdata();
    obj1.sum1();
    obj1.display();
    return 0;
}




