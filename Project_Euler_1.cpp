#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main(){

    int t;
    long long N,temp=0,n3=0,n5=0,n15=0,sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>N;
        temp=N-1;
        n3=(temp-temp%3)/3;
        n5=(temp-temp%5)/5;
        n15=(temp-temp%15)/15;
        sum=3*(n3*(n3+1)/2)+5*(n5*(n5+1)/2)-15*(n15*(n15+1)/2);
        cout<<sum<<endl;
    }
}