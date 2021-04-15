#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
typedef long long ll;
bool beauty(ll x)               //ktra so dep
{   for(ll i=1;i<=sqrt(x);i++)
        if(x%i==0)              //neu la uoc cua x
        {   if(pow(sqrt(i),2)==i&&i!=1)             return false;
            if(pow(sqrt(x/i),2)==x/i)               return false;
        }
    return true;
}
ll beaDid(ll n)                 //tim uoc dep lon nhat
{   ll beau=1;
    for(ll i=1;i<=sqrt(n);i++)
        if(n%i==0)              //neu la uoc cua n
        {   if(beauty(i))     beau=max(beau,i);
            if(beauty(n/i))   beau=max(beau,n/i);
        }
    return beau;
}
main()
{   int t;  cin>>t; while(t--){
    ll n;   cin>>n; 
    cout<<beaDid(n);
   cout<<endl;}
   //system("pause");
}