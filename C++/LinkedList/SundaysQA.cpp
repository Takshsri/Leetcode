#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int Sundays(string start_day, int no_of_days){
    unordered_map<string,int> days = {
         {"sunday" ,1},{"monday" ,2},{"tuesday",3},{"wednesday",4 },{"thursday",5},{"friday",6},{"saturday",7}
        };

    int sundays = 0;
    int current_day = days[start_day];
   
    for(int i=0;i<no_of_days;i++){   
        if(current_day == 0 ){
            sundays++;
        
        }
        current_day =(current_day+1) %7;
                
            }
            return sundays;
    
}

int main(){

    int no_of_days;
    string start_day;
    cout<<"Enter Start Day:";
    cin>>start_day;
    cout<<"Enter No.of Days:";
    cin>>no_of_days ;
    int ans = Sundays(start_day,no_of_days);
    cout<<"No of Sundays is " << ans;
}