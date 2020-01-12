//Few Exceptions of inline functions:
//For functions returning values,if a loop,switch, or goto exists
//If functions contain static variables
//If inline functions are recursive
#include<iostream>
#include<conio.h>
using namespace std;
inline float mul(float x,float y)
{
return(x*y);
}
/*inline double div(double p,double q)
{
	return(p/q);
}*/
int main()
{
	float a=12.345;
	float b=9.82;
	cout<<mul(a,b)<<"\n";
	//cout<<div(a,b)<<"\n";
	return 0;
}
