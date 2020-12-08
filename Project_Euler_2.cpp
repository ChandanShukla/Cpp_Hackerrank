#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    unsigned long long sum,prev2,prev,lat,N;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>N;
        sum=0;
        prev=0;
        prev2=1;
        lat=0;
        while(lat<=N){
            if(lat%2==0){
                sum+=lat;
            }
            lat=prev+prev2;
            prev2=prev;
            prev=lat;
        }
        
        cout<<"\n"<<sum;

    }
}