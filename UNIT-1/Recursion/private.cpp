#include <iostream>

using namespace std;


class A{
	private:
		int a;
		int b;
		//set value of a
		void set_a(int a){
			this->a=a;
		}
		//set value of b
		void set_b(int b){
			this->b=b;
		}
	public:
		void getValues(int x,int y){
			set_a(x); 
			set_b(y); 
		}
		void putValues(){
			
			cout<<"a="<<a<<",b="<<b<<endl;
		}
};

int main(){
	//creating object
	A objA;
	
	//set values to class data members
	objA.getValues(100,200);
	//print values
	objA.putValues();
	
	return 0;
}