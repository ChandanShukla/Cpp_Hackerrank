#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,temp,fi,start,end;
    cin>>t;
    vector <int> v;
    for(int i=0;i<t;i++){
        cin>>temp;
        v.push_back(temp);
    } 
    cin>>fi;
    cin>>start>>end;
    v.erase(v.begin()+fi-1);
    v.erase(v.begin()+start-1,v.begin()+end-1);
    cout<<v.size()<<endl;
    for(auto k=v.begin();k!=v.end();k++){
        cout<<*k<<" ";
    }
    return 0;
}
