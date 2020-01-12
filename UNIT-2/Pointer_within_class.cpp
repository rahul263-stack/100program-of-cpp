#include<iostream>
#include<iomanip>
using namespace std;
class Array
{
int *arr;
int size;
public:
void get_data(int n);
int get_sum();
void display_data();
};
void Array::get_data(int n)
{


size=n;
arr=new int[size];
for(int i=0;i<size;i++)
{
cin>>arr[i];
}
}
void Array::display_data()
{
for(int i=0;i<size;i++)
{
cout<<"\t"<<arr[i];
}
cout<<"\n Sum of elements="<<get_sum();
cout<<"\n Average of numbers="<<setprecision(4)<<fixed<<float(get_sum()/size);
}
int Array::get_sum()
{
int sum=0;
for(int i=0;i<size;i++)
{
sum+=arr[i];
}
return sum;
}
int main()
{
Array a;
int n;
cout<<"\n Enter the number of elements:"<<endl;
cin>>n;
a.get_data(n);
a.display_data();
}
