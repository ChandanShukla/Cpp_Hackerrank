#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    double x[n],y[n],sxy[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int j=0;j<n;j++){
        cin>>y[j];
    }
    for(int k=0;k<n;k++){
        sxy[k]=pow(x[k]-y[k],2);
        sum+=sxy[k];
    }
    cout<<sqrt(sum);
}