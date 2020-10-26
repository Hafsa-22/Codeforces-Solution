#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    string s;
    map<char, int> mp;
    for(i='a';i<='z';i++){
        mp[i]=0;
    }
    cin>>n>>k;
    cin>>s;
    for(i=0;i<n;i++){
        mp[s[i]]++;
    }
    int p=0;
    for(i='a';i<='z';i++){
        if(mp[i] <= k){
            continue;
        }
        else{
            p=1;
            break;
        }
    }
    if(p==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
