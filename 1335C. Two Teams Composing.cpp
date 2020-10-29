#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,a[200005],i,mx,t1,t2,ans;
    cin>>t;
    while(t--){
        cin>>n;
        map<long long int,long long int>mp;
        set<long long int>s;
        for(i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
            mp[a[i]]++;
        }
        t1 = s.size();
        mx = 0;
        for(i=0;i<n;i++){
            mx = max(mx,mp[a[i]]);
        }
        t2 = mx;
        if(t1==t2){
            cout<<t1-1<<endl;
        }
        else{
           ans = min(t1,t2);
           cout<<ans<<endl;
        }

    }
    return 0;
}
