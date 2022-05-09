#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll p =3;
    ll q =7;
    // cin>>p>>q;
    ll n = p*q;
  
    
    ll e = 2;
    ll pi = (p-1)*(q-1);
    while (e < pi)
    {
        
        if (__gcd(e, pi)==1)
            break;
        else
            e++;
    }
    int k= 2; 
    ll d = (1 + (k*pi))/e;
    ll msg = 20;
    ll c = pow(msg, e);
    c = fmod(c,n);
   cout<<c<<endl;
  
    
    ll m = pow(c, d);
    m = fmod(m,n);
    cout<<m<<endl;
}