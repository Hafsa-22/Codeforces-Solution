#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss;
    int n,f=0;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++){
        if(s[i] != s[i+1]){
            ss+=s[i];
            ss+=s[i+1];
            f=1;
            break;
        }
        else{
            f=0;
        }
    }
    if(f==1){
        cout<<"YES"<<endl;
        cout<<ss<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
