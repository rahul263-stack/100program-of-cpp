//this pointer returning the reference of the current object
#include<iostream>
using namespace std;
class student
{
    char name[100];
    int age,roll;
    float percent;
    public:
        void getdata()
        {
            cout<<"Enter data"<<endl;
            cout<<"Name:";
            cin>>name;
            cout<<"Age:";
            cin>>age;
            cout<<"Roll:";
            cin>>roll;
            cout<<"Percent:";
            cin>>percent;
            cout<<endl;
        }
        student  &max(student &s1,student &s2)
        {
        if(percent>s1.percent && percent>s2.percent)
                return *this;
        else if(s1.percent>percent && s1.percent>s2.percent)
                return s1;
        else if(s2.percent>percent && s2.percent>s1.percent)
                return s2;
        }
        void display()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Age:"<<age<<endl;
            cout<<"Roll:"<<roll<<endl;
            cout<<"Percent:"<<percent;
        }
};

int main()
{
    student s,s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();
    s=s3.max(s1,s2);
    cout<<"Student with highest percentage"<<endl;
    s.display();
}
