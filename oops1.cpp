#include<iostream>
using namespace std;
//Just simple student class
class student{
    //by default all are set to private we need to make it public to access outside
    public:
    int roll;
    int age;
    void display(){
        cout<<age<<" "<<roll<<endl;
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
    s1.display();
    (*s2).display();
}