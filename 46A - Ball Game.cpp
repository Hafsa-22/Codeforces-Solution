#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=1,d;
    cin>>n;
    for(int i=1;i<n;i++){
       a+=i;
       if(a%n==0){
        a = a;
       }
       else{
        a%=n;
       }
       cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}
