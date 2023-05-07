/*
Q1)  Write a program using class to reverse a number. Use separate functions for input and reverse.
*/
#include <iostream>
using namespace std;
class reverse
{
    private:
        int n;
    public:
        void input(){
            cout<<"Enter a 3 digit number: ";
            cin>>n;
        }
        void output()
        {
            int i,r;
            for(i=0;i<3;i++)
            {
                r=n%10;
                n=n/10;
                cout<<r;
            }
        }
        
        
};
int main() {
    reverse r1;
    r1.input();
    r1.output();

    return 0;
}

/*
Q2)  Write a program to calculate area and cicumference of circle use sepaetate function for taking input and circumfrence and area calculations.
*/
#include <iostream>
using namespace std;
class circle
{
    private:
        float r;
    public:
        void input(){
            cout<<"Enter the radius: ";
            cin>>r;
        }
        void area()
        {
            float a;
            a=3.14*r*r;
            cout<<"Area of circle: "<<a<<endl;
        }
        void circumference()
        {
            float c;
            c=2*3.14*r;
            cout<<"Circumference of circle: "<<c<<endl;
        }
};
int main() {
    circle r1;
    r1.input();
    r1.area();
    r1.circumference();

    return 0;
}

/*
Q3) Write a program using class to to calculate gross salary of an employee. Calculate using following:
    DA=20% basic
    HRA=10% basic
*/
#include <iostream>
using namespace std;
class salary
{
    private:
        float s;
    public:
        void input(){
            cout<<"Enter salary: ";
            cin>>s;
        }
        void total()
        {
            float t;
            t=s+(s*0.2)+(s*0.1);
            cout<<"Total salary: "<<t<<endl;
        }
};
int main() {
    salary s;
    s.input();
    s.total();
    return 0;
}
