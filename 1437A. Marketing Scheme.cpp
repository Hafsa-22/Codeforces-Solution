#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,l,r,m,n,md;
    cin>>t;
    while(t--){
        cin>>l>>r;
        m = r+1;
        if(m%2!=0){
            m++;
        }
        n = m/2;
        md = l%m;
        if(md >= n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
