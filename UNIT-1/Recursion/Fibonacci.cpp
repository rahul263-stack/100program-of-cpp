#include<iostream>
using namespace std;
int Fibonacci(int);
int main()
{
int n, i = 0, c;
cout<<"Enter number of terms you want to print:"<<endl;
cin>>n;
cout<<"Fibonacci series:"<<endl;
 for ( c = 1 ; c <= n ; c++ )
   {
    cout<<Fibonacci(i)<<endl;
      i++;
   }
return 0;
}
 int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
