#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100001],i,j,mx=0;

    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long int,long long int>mp;

    sort(a,a+n);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            mp[a[i]+a[j]]++;
            mx = max(mx,mp[a[i]+a[j]]);
        }
    }
    cout<<mx<<endl;
    return 0;
}
