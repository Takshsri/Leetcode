#include<iostream>
/*Function Overloading
Compile-time polymorphism (also called static binding).

Same function name, different parameter list (number or types).

Resolved by the compiler at compile time.

Does not require inheritance.*/
using namespace std;
class Math{
    public:
        int add(int a,int b){return a+b;}
        double add(double a,double b){return a+b;}
};

/*Runtime polymorphism (also called dynamic binding).

Same function name, same parameter list, but in derived class.

Requires:

Inheritance.

Function in base class marked virtual for polymorphic behavior.

Resolved at runtime based on actual object type.*/
class Base {
    public:
        virtual void print(){
            cout<<"I am Base Class"<<endl;
        }

};

class Derived :virtual public Base{
    public:
        void print(){
            cout<<"I am Derived Class"<<endl;
        }
};
int main(){
    Math math ;
    cout<<math.add(2,4)<<endl;
    cout<<math.add(2.3,4.5)<<endl;
    Base* base = new Derived();
    base->print();

}