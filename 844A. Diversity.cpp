#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,t;
    string s;
    cin>>s;
    cin>>k;
    t = s.size();
    if(t < k){
        cout<<"impossible"<<endl;
    }
    else{
        set<int>st;
        for(int i=0;i<t;i++){
            st.insert(s[i]);
        }
        int l = st.size();
       // cout<<t<<" "<<l<<endl;
       if((k-l)< 0){
        cout<<"0"<<endl;
       }
       else{
        cout<<k - l<<endl;
       }
    }
    return 0;
}
