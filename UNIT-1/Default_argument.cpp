// A function with default arguments, it can be called with 2 arguments or 3 arguments or 4 arguments.
//Only trailing arguments can have the default values(right to left)
#include<iostream>
#include<conio.h>
using namespace std;


int sum(int x, int y, int z=0, int w=7)
{
    return (x + y + z + w);
}
int main()
{
    cout << sum(10, 15) << endl;
    cout << sum(10, 15, 25) << endl;
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}
