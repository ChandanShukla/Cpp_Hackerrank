#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    cout<<a.length()<<" ";
    cout<<b.length()<<endl;
    cout<<a<<b<<endl;
    cout<<b[0];
    for(int i=1;a[i];i++){
        cout<<a[i];
    }
    cout<<" "<<a[0];
    for(int j=1;b[j];j++){
        cout<<b[j];
    }
    return 0;
}