#include<iostream>
#include<string.h>

using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    int fr[26]={};
    int sc[26]={};
    cout<<"Input 1 "<<input1<<" "<<strlen(input1)<<endl;
    cout<<"Input 2 "<<input2<<" "<<strlen(input2)<<endl;
    if(strlen(input1)==strlen(input2)){
        for(int i=0;i<strlen(input1);i++){
            fr[input1[i]-'a']++;
            sc[input2[i]-'a']++;
        }
        for(int j=0;j<26;j++){
            if(fr[j]!=sc[j]){
                return 0;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    char input1[6]={'l','i','s','t','e','n'};
    char input2[6]={'n','e','t','s','i','l'};
    cout<<isPermutation(input1,input2);

}