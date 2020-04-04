//oops2 using getters to access the information
#include<iostream>
using namespace std;
//Just simple student class
class student{
    //by default all are set to private we need to make it public to access outside
    private:
    int roll;
    int age;
    public:
    int getAge()
    {
        return age;
    }
    int getRoll()
    {
        return roll;
    }
};
int main()
{
    student s1;//syntax to create an object statically
    student *s2=new student;
    // how to acces the information
    s1.age=10;
    s1.roll=10;
    s2->age=20;
    s2->roll=20;
    cout<<s1.getAge()<<" "<<s1.getRoll<<endl;
    // cout<<(*s2).getAge()<<" "<<(*s2).getRoll<<endl;
}