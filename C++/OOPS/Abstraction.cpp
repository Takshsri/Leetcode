#include<iostream>
/*An abstract class in C++ is a class that cannot be instantiated and is meant to be used as a base class.
It must have at least one pure virtual function (a virtual function set to = 0).
A class becomes abstract if it has at least one pure virtual function:
virtual void func() = 0;
You cannot create objects of an abstract class directly — only pointers/references to it.

Any derived class must override all pure virtual functions, or it too becomes abstract.

*/
using namespace std;
class Payment{
    public:
    virtual void pay(double amount)= 0;
        
};
class creditPay : public Payment{
    public:
    void pay(double amount) override{
        cout<<"Amount:"<<amount<<" using Credit Card"<<endl;
    }

};

class Upi:public Payment{
    public:
    void pay(double amount) override{
        cout<<"Amount :"<<amount<<" using UPI"<<endl;
    }
};

class Shape{
    public:
    virtual void draw()=0;
};

class Circle : virtual public Shape{
    public:
    void draw() override{
        cout<<"I am Circle"<<endl;

    }
};
int main(){
    Payment* p1 = new creditPay();
    Payment* p2 = new Upi();
    p1->pay(500);
    p2->pay(100);
    Shape* s = new Circle();
    s->draw();
}

/*
Difference between virtual and pure virtual function
1. Virtual function
Declared with the virtual keyword.

Has a body (implementation) in the base class.

Can be overridden in the derived class, but not required.

If not overridden, the base class version will be used.


class Base {
public:
    virtual void show() { cout << "Base version" << endl; }
};
2. Pure virtual function
Declared with = 0 at the end.

No body in the base class (only a declaration).

Makes the class abstract → cannot instantiate it.

Must be overridden in the derived class (unless the derived class is also abstract).

cpp
Copy
Edit
class Base {
public:
    virtual void show() = 0; // pure virtual
};*/