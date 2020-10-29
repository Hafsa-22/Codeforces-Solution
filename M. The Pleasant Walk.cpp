#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r", stdin);
    long long int n,k,a[100001],i,j,c,m;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    m=0;
    c=1;
    for(j=0; j<n-1; j++)
    {
        if(a[j]!=a[j+1])
        {
            c++;
        if(m < c){
                m = c;
        }
        }
        else{
            if(m<c){
                m = c;
            }
            c=1;
        }

    }
    if(n==1){
        cout<<"1"<<endl;
    }
    else{
    cout<<m<<endl;
    }
    return 0;
}
