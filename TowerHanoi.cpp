#include<bits/stdc++.h>

using namespace std;

void towerHanoi(int n,int src,int des,int help){
    if(n==0){
        return;
    }
    towerHanoi(n - 1, src, help, des);
    cout << "\n" <<n << "[" << src << " -> " << des << "]";
    towerHanoi(n - 1, help, des, src);

}

int main(){
    int n,src,des,help;
    cin >> n;
    cin >> src;
    cin >> des;
    cin >> help;
    towerHanoi(n, src, des, help);
}