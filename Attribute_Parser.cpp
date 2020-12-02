#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b;
    string s;
    cin>>a>>b;
    vector <string> v,v2;
    cin.ignore();
    while(a>0){
        getline(cin,s);
        v.push_back(s);
        a--;
    }
    while(b>0){
        getline(cin,s);
        v2.push_back(s);
        b--;
    }
    



    return 0;
}
