#include<bits/stdc++.h>

using namespace std;

void prog(int n){
    if(n>0){
        cout<<n<<"\n";
        prog(n - 1);
        prog(n - 2);
        prog(n - 3);
    }
}

int main(){
    int n;
    cin>>n;
    prog(n);
}
