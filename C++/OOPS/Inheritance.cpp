/*
#include<iostream>
using namespace std;
class A{
    public:
        void Avoice(){
            cout<<"I am Base Class";
        }
};

class B: public A{
    public:
        void Bvoice(){
            cout<<"I am Derived Class";
        }
};

int main(){
    A a ;
    B b;
    a.Avoice();
    cout<<endl;
    b.Avoice();
    cout<<endl;
    b.Bvoice();
}
    


//Inheritance using virtual functions
/*Definition: In C++, "virtual" can be applied to inheritance to prevent multiple copies of a base class when using multiple inheritance (solves the diamond problem).

Purpose: Ensures that only one shared instance of a base class is inherited, even if it appears multiple times in the hierarchy.

Example:
Virtual inheritance is about memory layout & avoiding duplicate base class copies.


#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a Person" << endl;
    }
};

class Student : virtual public Person { };
class Employee : virtual public Person { };

class WorkingStudent : public Student, public Employee { };

int main() {
    WorkingStudent ws;
    ws.show(); 
}

*/

#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base::show()" << endl; }
    void display() { cout << "Base::display()" << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived::show()" << endl; }
    void display() { cout << "Derived::display()" << endl; }
};

int main() {
    Base* bptr = new Derived();
    bptr->show();
    bptr->display();
    delete bptr;
}
//Output is Derived show and Base Display
/*bptr->show();

show() is declared virtual in Base and overridden in Derived.

With virtual functions, C++ uses runtime binding.

The actual object type is Derived, so it calls Derived::show().

Output so far:

cpp
Copy
Edit
Derived::show()
bptr->display();

display() is not virtual in Base.

C++ uses compile-time binding for non-virtual functions.

The pointer type (Base*) decides which function to call.

So it calls Base::display(), not Derived::display().

Output now:
Derived::show()
Base::display()
*/



/*
If a base class has a constructor and you create a derived object, 
in what order do constructors and destructors get called in single inheritance?
Constructor Order (Single Inheritance)
When you create a derived class object:

Base class constructor runs first.

Derived class constructor runs second.

Destructor Order
When the object is destroyed:

Derived class destructor runs first.

Base class destructor runs last.
Reason:

Constructors build from top → down (base first, then derived).

Destructors destroy from bottom → up (derived first, then base).

This ensures that:

The base part of the object is ready before the derived part needs it.

Resources in the derived class are released before the base class cleans up.
*/