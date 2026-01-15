#include<iostream>
using namespace std;
string dayOfProgrammer(int year) {
    string date;
    string y=to_string(year);
    if(year==1918){
        to_string(year);
        date="26.09."+y;
    }
    else if(year <=1917){
        if(year%4==0){
            to_string(year);
            date="12.09."+y;
        }
        else{
            to_string(year);
            date="13.09."+y;
        }
    }
    else{
        if((year % 400 ==0 ) || (year %100!=0 && year %4==0)){
            to_string(year);
            date="12.09."+y;
        }
        else{
            to_string(year);
            date="13.09."+y;
        }
    
    }
    return date;
}

int main(){
    
    
    int year;
    cout<<"ENter year:";
    cin>>year;
    
    cout<<dayOfProgrammer(year);

}