#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    double x[n],max;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    max=x[0];
    for(int j=0;j<n;j++){
        if(max<x[j]){
            max=x[j];
        }
    }
    cout<<max;
}