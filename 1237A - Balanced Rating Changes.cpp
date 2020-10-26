#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,n,a[13847],f=0;
   cin>>n;
   for(i=0;i<n;i++){
      cin>>a[i];
   }
   for(i=0;i<n;i++){
    if(a[i]%2 == 0){
        a[i] = a[i]/2;
    }
    else{
        if(f==0){
            a[i] = ceil((double)a[i]/2);
            f=1;
        }
        else if(f==1){
            a[i] =floor((double)a[i]/2);
            f=0;
        }
    }
   }
   for(i=0;i<n;i++){
    cout<<a[i]<<endl;
   }
   return 0;
}
