#include<iostream>
#include<string>
using namespace std;
string Convert(string time){
    string hour=time.substr(0,2);
    int hourTime=stoi(hour);
    cout<<hourTime<<endl;
    size_t pos=time.find("PM");
    if(pos!=string :: npos){
            if(hourTime+12<24){
                hour=to_string(hourTime+12);
            }

    }
    else{
        if(hourTime == 12){
                hour="00";
        }
    }
    return time.replace(0,2,hour).erase(time.size() -2);
}
int main(){

    string time="12-09-23PM";
    cout<<"24 Hour Time: \t"<<Convert(time);
}