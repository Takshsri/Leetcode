/*
#include<iostream>
using namespace std;

class Complex{
    private:
        int real,imag;
    public:
        Complex(int r=0,int i=0){
            real=r;
            imag=i;
        }
    Complex operator + (Complex const &obj){
        Complex res;
        res.real=this->real+obj.real;
        res.imag=this->imag+obj.imag;
        return res;
    }

    void print(){
        cout<<real<<" + "<<imag<<" i "<<endl;
    }

};

int main(){
    Complex c1(10,2),c2(5,6),c3;
    c3=c1+c2;
    c3.print();
   
}

*/

#include<iostream>
using namespace std;
class A{
    private:
        int private_variable;
    protected:
        int protected_variable;
    public:
     A(){
        private_variable=120;
        protected_variable=10;

    }
    friend class F;

};

class F{
    public:
        void display(A& obj){
            cout<<"Private Variable:"<<obj.private_variable<<endl;
            cout<<"Protect Variable:"<<obj.protected_variable<<endl;

        }
};

int main(){
    A a;
    F fri;
    fri.display(a);
}