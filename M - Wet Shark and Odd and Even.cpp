#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);

   ll n;
   cin>>n;
   vector<ll>v(n);
   for(ll i=0; i<n; i++)
   {
      cin>>v[i];
   }
   sort(v.begin(),v.end(),greater<ll>());
   ll a,count=0;
   ll i=0;
   ll sum=0;
   while(i<n)
   {
      if(v[i]%2!=0)
      {
        count++;
        a=v[i];
      }
      sum+=v[i];
      i++;
   }
   if(count%2!=0) cout<<sum-a<<'\n';
   else cout<<sum<<'\n';
   return 0;
}