//Some key features
//A static function can have access to only other static members declared in the same class
//A static function can be called using the class name
#include<iostream>
#include<conio.h>
using namespace std;
class ID_Generator
{
	static int next_ID;
	public:
    static void GenNextID()
    {
        cout<<"\n Next ID="<<next_ID++;
    }

};
int ID_Generator::next_ID=1;
int main()
{
   for(int i=0;i<5;i++)
   {
       ID_Generator::GenNextID();
   }
}
