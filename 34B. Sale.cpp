#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],m,sum=0,c=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i] >= 0){
            continue;
        }
        else if(c < m){
            sum+=a[i];
            c++;
        }
    }
    sum = abs(sum);
    cout<<sum<<endl;
    return 0;
}
