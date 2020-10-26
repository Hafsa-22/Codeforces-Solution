#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,a[101],b[101],x=0,y=1010,p,q;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    x = abs(a[0]-a[n-1]);
    y = min(y,x);
    p = 1,q=n;
    for(int i=0;i<n;i++){
        x = abs(a[i]-a[i+1]);
        if(y > x){
            y = x;
            p=i+1;
            q=i+2;
        }
    }
    cout<<p<<" "<<q<<endl;
    return 0;
}
