#include<bits/stdc++.h>

using namespace std;

int main(){

    int am,an;
    int bm,bn;
    cout<<"Enter the Row/Col for first array";
    cin>>am>>an;
    cout<<"\n"<<"Enter the Row/Col for second array";
    cin>>bm>>bn;
    int a[am][an],b[bm][bn],c[am][bn];
    for(int i=0;i<am;i++){
        for(int j=0;j<an;j++){
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(int i=0;i<bm;i++){
        for(int j=0;j<bn;j++){
            cin>>b[i][j];
        }
    }
    if(am==bn){
        for(int i=0;i<am;i++){
            for(int j=0;j<bn;j++){
                    c[i][j]=0;
                    for(int k=0;k<bn;k++){
                        c[i][j]+=a[i][k]*b[k][j];
                    }
            }
        }
    }
    for(int i=0;i<am;i++){
        for(int j=0;j<bn;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}