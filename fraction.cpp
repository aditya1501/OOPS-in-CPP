#include<iostream>
using namespace std;
class Fraction{
    private:
    int numerator;
    int denominator;
    public:
    /* we overloaded by writing the below way 
        we must use this opertor to avoid overloading 
     Fraction(int numerator,int denominator)
    // {
    //     numerator=numerator;
    //     denominator=denominator;
    }*/
    Fraction(int numerator,int denominator)
    {
       this->numerator=numerator;
    this->denominator=denominator;
    }
    void print(){
        cout<<this->numerator<<"/"<<this->denominator<<endl;
    //   cout<<numerator<<"/"<<denominator<<endl;
      //we can avoid this opertor because here implicitly the it means this so we don't need to mention it
    }
    void simplify()
    {
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++)
        {
         if(this->numerator%i==0 and this->denominator%i==0)
         {
             gcd=i;
         }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;


    }
    void add(Fraction f2)
    {
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+(y*f2.numerator);
        numerator=num;
        denominator=lcm;
        simplify();//imlicitly here simplify means this->simplify here this is f1
    }


};
int main()
{
    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();


}