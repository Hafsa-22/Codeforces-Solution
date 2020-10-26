#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i,j,p[105],s[105],h;
    cin>>n>>m>>k;
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    for(i=0;i<n;i++){
        cin>>s[i];
    }
    int c=0;
    for(i=0;i<k;i++){
       cin>>h;
       for(j=0;j<n;j++){
        if(s[j]==s[h-1] && p[j] > p[h-1]){
            c++;
            break;
        }
       }
    }
    cout<<c<<endl;
    return 0;
}
