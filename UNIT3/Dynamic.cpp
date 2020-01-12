#include<iostream>
using namespace std;
class Array
{
private:
int *arr;
int n;
public:
Array(int);
void show_data();
};
Array::Array(int num)
{
n=num;
arr=new int[n];
cout<<"\n Enter the elements:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
}
void Array::show_data()
{
for(int i=0;i<n;i++)
{
cout<<" "<<arr[i];
}
}
int main()
{
int size;
cout<<"\n Enter the size of array:";
cin>>size;
Array Arr(size);
Arr.show_data();
}
