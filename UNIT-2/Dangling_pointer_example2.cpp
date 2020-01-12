#include<iostream>
using namespace std;
int main()
{
   int *ptr;
   {
       int v=23;
       ptr = &v;
   }


   // Here ptr is dangling pointer as v is no longer existing
   cout<<*ptr;

}
