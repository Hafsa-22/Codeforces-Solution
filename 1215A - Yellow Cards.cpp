#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a1,a2,k1,k2,n,p,q;
   cin>>a1>>a2>>k1>>k2;
   cin>>n;
   if(k1 > k2){
    swap(k1,k2);
    swap(a1,a2);
   }
   if(n <= a1*k1){
      p = n/k1;
   }
   else{
    p = a1+(n-(a1*k1))/k2;
   }
   q = max(0,n-a1*(k1-1)-a2*(k2-1));
   cout<<q<<" "<<p<<endl;
   return 0;
}
