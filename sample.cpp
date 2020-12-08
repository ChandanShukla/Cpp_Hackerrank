#include <bits\stdc++.h>
#include <math.h>

using namespace std;


int main(){

    int n;
    cout<<"Enter the the number of fibonacii terms you want: ";
    cin>>n;
    int fibo[n];
    if(n==1){
        fibo[0]=0;
    }
    else if(n==2){
        fibo[0]=0;
        fibo[1]=1;
    }
    else{
        fibo[0]=0;
        fibo[1]=1;
        for(int i=2;i<n;i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }
    cout<<"\n";
    for(int j=0;j<n;j++){
        cout<<fibo[j]<<" ";
    }
    

}