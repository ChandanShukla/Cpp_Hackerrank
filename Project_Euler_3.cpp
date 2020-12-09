#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){

    int t;
    long long N,temp,large;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>N;
        temp=2;
        large=0;
        while(temp<N){
            if(N%temp==0){
                large=temp;
            }
            else{
                temp++;
            }

        }
        cout<<large<<"\n";
    }

}