#include <bits/stdc++.h>
#include <cmath>
#include<string>

using namespace std;

int main(){

    /*float n=-8.7;
    cout<<"Ceil: "<<ceil(n)<<"\n";
    cout<<"Floor: "<<floor(n)<<"\n";
    cout<<"Absolute: "<<abs(n)<<"\n";
    cout<<"F Absolute: "<<fabs(n); 
    int x[3],y[3];
    int ans=0;
    cout<<"Enter the first array: ";
    for(int i=0;i<3;i++){
        cin>>x[i];
    }
    cout<<"\nEnter the second array: ";
    for(int j=0;j<3;j++){
        cin>>y[j];
    }
    for(int k=0;k<3;k++){
        ans+=x[k]*y[k];
    }
    cout<<sqrt(ans); */
    int count=0;
    string s;
    cin>>s;
    map<char,int> m;
    for(int i=0;s[i];i++){
        m[s[i]]++;
    }
    //map<char,int>:: iterator it;
    for(auto& it:m){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}