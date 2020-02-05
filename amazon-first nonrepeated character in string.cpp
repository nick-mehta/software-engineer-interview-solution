#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int l=s.length();
    int a;
    
    for(int i=0;i<l;i++){
        a=l-1;// length-1 time it compare 
        for(int j=0;j<l;j++){
            if(i!=j){
                if(s[i]==s[j]){
                    break;
                }
                else{
                    a--;
                }
            }
            if(a==0){
                break;
            }
        }
        if (a==0){
            cout<<s[i]<<endl;
            break;
        }
    }
}