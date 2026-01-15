/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int GCD(int a,int b){
    int res=min(a,b);
    while(res>0){
            if(a%res ==0  && b%res==0){
                break;
            
        }
        res--;
        
    }
    return res;
}

int lcm(int a,int b){
    return (a*b)/(GCD(a,b));
}
int main(){
    vector<int> a={2,4};
    sort(a.begin(),a.end());
    int res=GCD(20,28);
    int result=lcm(20,28);
    cout<<res<<endl;
    cout<<result;

}

*/
//between 2 sets
//above solution does not give optimal solution

#include<iostream>
#include<vector>
using namespace std;

    int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100], b[100];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (int i=0; i<m; i++)
        scanf("%d", &b[i]);
    int cnt = 0;
    for (int k=1; k<=100; k++)
    {
        int flag = 1;
        for (int i=0; i<n; i++)
            if (k % a[i] != 0)
                flag = 0;
        for (int i=0; i<m; i++)
            if (b[i] % k != 0)
                flag = 0;
        if (flag == 1)
            cnt ++;
    }
    printf("%d\n", cnt);
    return 0;
}
